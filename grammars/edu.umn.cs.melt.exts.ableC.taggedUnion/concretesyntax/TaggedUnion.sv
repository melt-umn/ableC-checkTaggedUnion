grammar edu:umn:cs:melt:exts:ableC:taggedUnion:concretesyntax;

-- Import host language components
imports edu:umn:cs:melt:ableC:concretesyntax;
imports edu:umn:cs:melt:ableC:abstractsyntax:host as abs;
imports edu:umn:cs:melt:ableC:abstractsyntax:construction as abs;


-- Some library utilities and the taggedUnion abstract syntax
imports silver:langutil;
imports edu:umn:cs:melt:exts:ableC:taggedUnion:abstractsyntax;

marking terminal TaggedUnion_t 'tagged_union' lexer classes {Ckeyword};

concrete production taggedUnionTypeQualifier_c
top::TypeQualifier_c ::= 'tagged_union'
{
  top.typeQualifiers = abs:foldQualifier([taggedUnionQualifier(location=top.location)]);
  top.mutateTypeSpecifiers = [];
}

