/*
 * The return type of a function shall be void or an object type other than
 * array type.
 */
int test000(void)[3]
{
}

int test001(void)[]
{
}

struct S;

struct S test002(void)
{
}

union U;

union U test003(void)
{
}
