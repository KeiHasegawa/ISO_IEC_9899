/*
 * After all rewrites, the parameters in a parameter-type-list that is part of
 * a function definition shall not have incomplete type.
 */
struct S;

void test000(struct S); /* ok */

void test001(struct S a); /* ok */

void test000(struct S a) /* error */
{
}

struct S {
  int a;
};

void test001(struct S a) /* ok */
{
}
