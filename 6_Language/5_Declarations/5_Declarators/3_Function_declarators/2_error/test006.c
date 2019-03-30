/*
 * If the function declarator is not part of a function definition, the
 * parameters may have incomplete type.
 */
void test000(struct S s)
{
}

void test001(union U u)
{
}

void test002(enum E e)
{
}
