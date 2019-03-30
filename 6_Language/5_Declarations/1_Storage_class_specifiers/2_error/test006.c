/*
 * Check if function calls are error,
 * where function returns incomplete struct type or
 * function parameter is incomlete struct type.
 */
struct S f(void);
extern struct S a;
void g(struct S);

void h(void)
{
  f();
  g(a);
}
