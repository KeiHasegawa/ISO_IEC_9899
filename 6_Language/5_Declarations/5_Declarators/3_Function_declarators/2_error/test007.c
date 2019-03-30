/*
 * An identifier list declares only the identifiers of the parameters of the
 * function. An empty list in a function declarator that is part of a function
 * definition specifies that the function has no parameters. The empty list in
 * a function declarator that is not part of a function definition specifies
 * that no information about the number or types of the parameters is supplied.
 */
void test000()
{
}

void f(void)
{
  test000(0); /* error */
}
