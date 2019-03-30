/*
 * If the declarator includes a parameter type list, the declaration of each
 * parameter shall include an identifier (except for the special case of a
 * parameter list consisting of a single parameter of type void, in which
 * there shall not be an identifier). No declaration list shall follow.
 */
void test000(int)
{
}

void test001(int)
     int a;
{
}

void test002(int a)
     int a;
{
}
