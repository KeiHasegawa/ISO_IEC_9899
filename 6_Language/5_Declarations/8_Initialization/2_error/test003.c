/*
 * Check if block scope initializations are error,
 * where, initialized variable has `extern' storage.
 */
int a;
static int b;

void f(void)
{
  extern int a = 1;
  extern int b = 2;
  extern int c = 3;
}
