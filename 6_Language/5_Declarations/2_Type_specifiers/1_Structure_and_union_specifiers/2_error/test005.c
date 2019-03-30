/*
 * Check if parameter scope struct declaration works well.
 * (function definition)
 */

void f(struct S { int a; } s)
{
}

void g(struct S { int a; } s)
{
  struct S s2 = { 1 };
  f(s2); // error. g::param::struct S is not compatible with f::param::struct S
  void f(); // hide global f declaration
  f(s2);  // ok
}
