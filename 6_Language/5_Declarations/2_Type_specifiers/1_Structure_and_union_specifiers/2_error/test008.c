/*
 * Check if parameter scope union declaration works well. 
 * (global scope function declaration)
 */

void f(union U { int i; float f; } u);

void g(union U { int i; float f; } u)
{
  f(u);  // error. g::param::union U is not compatible with f::param::union U
  void f();  // hide global `f' declaration
  f(u);  // ok
}
