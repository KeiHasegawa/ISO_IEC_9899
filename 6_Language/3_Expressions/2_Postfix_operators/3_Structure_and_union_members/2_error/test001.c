/*
 * Check if use of function call result as lvalue is error.
 */
struct T {
  int x;
  int y;
};

struct T f(void);

int main(void)
{
  f().x = 1;  /* not lvalue */
  &f().x;  /* not lvalue */
  return 0;
}
