/*
 * Check if undeclared variable arugment is error.
 */
void g(int a);

void h(double x, float y, unsigned int z);

void f(void)
{
  g(a);      /* error. `a' is not declared. */
  h(1,2,z);  /* error. `z' is not declared. */
}
