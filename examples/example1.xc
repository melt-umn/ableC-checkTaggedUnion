#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

struct Expr {
	enum {AND, OR, LITERAL} tag;
	union ExprVariant {
		struct {
			struct Expr *lhs;
			struct Expr *rhs;
		} and;
		struct {
			struct Expr *lhs;
			struct Expr *rhs;
		} or;
		bool literal;
	} variant;
};

int eval(tagged_union struct Expr *e)
{
	int val = 999;

	switch (e->tag) {
	case AND:
		val = eval(e->variant.and.lhs) && eval(e->variant.and.rhs);
		break;
	case OR:
		/* this would be a runtime error */
//		val = eval(e->variant.and.lhs) || eval(e->variant.and.rhs);
		val = eval(e->variant.or.lhs) || eval(e->variant.or.rhs);
		break;
	case LITERAL:
		val = e->variant.literal;
		break;
	};

	return val;
}

int main(void)
{
	tagged_union struct Expr true_expr;
	true_expr.tag = LITERAL;
	true_expr.variant.literal = true;

	tagged_union struct Expr false_expr;
	false_expr.tag = LITERAL;
	false_expr.variant.literal = false;

	tagged_union struct Expr e;
	e.tag = OR;
	e.variant.or.lhs = &true_expr;
	e.variant.or.rhs = &false_expr;
	/* this would be a runtime error */
//	e.variant.and.lhs = &true_expr;

	printf("true || false = %d\n", eval(&e));

	return 0;
}

