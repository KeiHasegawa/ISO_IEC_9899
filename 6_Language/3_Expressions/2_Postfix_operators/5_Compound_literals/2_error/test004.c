/*
 * Check if undeclared variable in initializer-list of compound-literal.
 */
void f(void)
{
  (int [3]){ 1, 2, a };

  struct S {
    int a;
    char b;
  };

  (struct S){ b , 'c' };
}
