/*
 * o Check if undeclared variable member referenced is error.
 * o Check if undeclared member reference is error.
 */
struct T {
  int a;
  int b;
};

int main(void)
{
  x.a;  /* undeclared `x' */
  struct T t;
  t.y;  /* no member named `y' */
  z->a; /* undeclared `z' */
  struct T* pt;
  pt->c; /* no member named `c' */
  return 0;
}
