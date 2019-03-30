/*
 * Check if mismatch of function parameters and function arguments
 * are error.
 */
void f(void);

void g(int, ...);

int main(void)
{
  f();       /* ok */
  f(1);      /* error */
  g();       /* error */
  g(3);      /* ok */
  g(3,2,1);  /* ok */
  g((void*)3);  /* error */
  return 0;
}
