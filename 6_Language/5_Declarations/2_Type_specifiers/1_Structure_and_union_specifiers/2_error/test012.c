/*
 * Check if parameter scope struct declaration works well.
 * (abstract declarator parameter scope at block scope function declaration)
 */

struct S {
  int a;
};

void f()
{
  void g(void (*)(struct S { int a; }));

  void h(struct S); // struct ::S

  g(&h);  // error
}
