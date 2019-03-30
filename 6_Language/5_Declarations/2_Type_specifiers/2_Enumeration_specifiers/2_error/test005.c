/*
 * Check if parameter scope enum declaration works well.
 * (abstract declarator parameter scope at global scope function declaration)
 */

void f(int (*)(enum E { a, b, c } e));  

void f(int (*)(enum E { a, b, c } e));  // error.
/* previous  enum E at f::param::abs-func::param is not compatible
   with here enum E at f::param::abs-func::param */

void g(int (*pf)(enum E { a, b, c } e))
{
  f(pf);  // error
  /* f::param::abs-func::param::enum E is not compatible with
     g::param::abs-func::param::enum E */
  void f(int (*)(enum E)); // hide global `f' declaration
  f(pf);  // error
  /* enum E at g::param::abs-func::param is not compatible with
     enum E at g::body::f::param::abs-func::param */
}
