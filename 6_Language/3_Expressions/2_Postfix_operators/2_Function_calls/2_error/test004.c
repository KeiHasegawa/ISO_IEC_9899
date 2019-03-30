/*
 * Check if use of function call as lvalue is error.
 */
extern int f(void);

int main(void)
{
  f() = 1;
  return 0;
}
