/*
 * Check error if the expression type is not complete struct, union or
 * enum type.
 */
struct S;
extern struct S s;
union U;
extern union U u;
enum E;
extern enum E e;

void f(void)
{
  s;
  u;
  e;
}

