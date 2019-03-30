/*
 * Check if parameter scope enum declaration works well.
 * (global scope function declaration)
 */
void f(enum E { a, b, c }* pe);

void g(enum E { a, b, c }* pe)
{
  f(pe);  // error. g::param::enum E is not compatible with f::param::enum E
  void f();  // hide global f declaration
  f(pe);  // ok
}

