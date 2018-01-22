grammar edu:umn:cs:melt:exts:ableC:taggedUnion:abstractsyntax; 

imports silver:langutil;
imports silver:langutil:pp;
imports edu:umn:cs:melt:ableC:abstractsyntax:host;
imports edu:umn:cs:melt:ableC:abstractsyntax:env;
imports edu:umn:cs:melt:ableC:abstractsyntax:construction;
imports edu:umn:cs:melt:ableC:abstractsyntax:injectable as inj;

global MODULE_NAME :: String = "edu:umn:cs:melt:exts:ableC:taggedUnion";

abstract production taggedUnionQualifier
top::Qualifier ::=
{
  top.pp = text("tagged_union");
  top.mangledName = "tagged_union";
  top.qualIsPositive = true;
  top.qualIsNegative = true;
  top.qualAppliesWithinRef = false;
  top.qualCompat = \qualToCompare::Qualifier ->
    case qualToCompare of taggedUnionQualifier() -> true | _ -> false end;
  top.qualIsHost = false;
  -- TODO: error if type is not a tagged union
  top.errors := [];
}

aspect production inj:memberExpr
top::Expr ::= lhs::Expr  deref::Boolean  rhs::Name
{
  local lhs1Ty :: Type =
    case lhs of
      memberExpr(lhs1, deref1, _) ->
        if !deref1 then lhs1.typerep
        else case lhs1.typerep of
               pointerType(_, ty) -> ty
             | _ -> error("expected lhs pointerType")
             end
    | _ -> error("expected lhs memberExpr")
    end;

  local isTaggedUnionVariantDeref :: Boolean =
    case lhs of
      memberExpr(_, _, rhs1) ->
        rhs1.name == "variant" &&
        containsQualifier(taggedUnionQualifier(location=builtinLoc(MODULE_NAME)), lhs1Ty)
    | _ -> false
    end;

  local structItems :: StructItemList =
    case lhs1Ty of
      tagType(_, refIdTagType(_, _, rid)) ->
        case lookupRefId(rid, top.env) of
          [structRefIdItem(structDecl(_, _, dcls))] -> dcls
        | _ -> error("failed to look up refId")
        end
    | _ -> error("expected refIdTagType")
    end;

  local enumItems :: EnumItemList =
    case structItems of
      consStructItem(structItem(_, enumTypeExpr(_, enumDecl(_, dcls)), _), _) ->
        dcls
    | _ -> error("expected first struct item to be `tag` enum")
    end;

  local unionItems :: StructItemList =
    case lhs.typerep of
      tagType(_, refIdTagType(_, _, rid)) ->
        case lookupRefId(rid, top.env) of
          [unionRefIdItem(unionDecl(_, _, dcls))] -> dcls
        | _ -> error("failed to look up refId")
        end
    | _ -> error("expected refIdTagType")
    end;

  local variantIndex :: Integer = findStructItemPos(rhs.name, unionItems);

  local enumName :: Name = getNthEnumItemName(enumItems, variantIndex);

  local checkTag :: (Expr ::= Expr) =
    case lhs of
      memberExpr(lhs1, deref1, _) ->
        \tmpE :: Expr ->
          notEqualsExpr(
            memberExpr(
              lhs1, deref1,
              name("tag", location=builtinLoc(MODULE_NAME)),
              location=builtinLoc(MODULE_NAME)
            ),
            declRefExpr(enumName, location=builtinLoc(MODULE_NAME)),
            location=builtinLoc(MODULE_NAME)
          )
    | _ -> error("expected lhs memberExpr")
    end;

  runtimeMods <-
    if isTaggedUnionVariantDeref
    then [inj:runtimeCheck(checkTag, "ERROR: mismatched tag\\n", top.location)]
    else [];
}

function findStructItemPos
Integer ::= n::String  items::StructItemList
{
  return findStructItemPosHelper(n, items, 0);
}

function findStructItemPosHelper
Integer ::= n::String  items::StructItemList  pos::Integer
{
  return
    case items of
      -- assuming union has a single decl per item
      consStructItem(structItem(_, _, consStructDeclarator(structField(n1, _, _), _)), t) ->
        if n == n1.name then pos else findStructItemPosHelper(n, t, pos+1)
    | consStructItem(_, t) -> findStructItemPosHelper(n, t, pos)
    | nilStructItem() -> error("did not find `" ++ n ++ "` in union items")
    end;
}

function getNthEnumItemName
Name ::= items::EnumItemList  i::Integer
{
  return
    case items of
      consEnumItem(enumItem(n, _), t) ->
        if i < 1 then n else getNthEnumItemName(t, i-1)
    | nilEnumItem() -> error("not enough enum items")
    end;
}

