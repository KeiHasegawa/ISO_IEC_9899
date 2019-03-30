/*
 * If * is used instead of a size expression, the array type is a variable
 * length array type of unspecified size, which can only be used in
 * declarations with function prototype scope.
 */
void test000(void)
{
  extern int a[*];
}

extern int test001[*];


