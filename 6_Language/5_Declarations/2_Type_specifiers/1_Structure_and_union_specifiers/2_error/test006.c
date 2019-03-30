/*
 * Check if parameter scope union declaration works well.
 * (funcion definition)
 */

void f(union U { int i; float f; } u)
{
}

void g()
{
  union U {
    int i;
    float f;
  };
  union U x;
  x.f = 0.5;
  f(x);  // error. g::body::union U is not compatible with f::param::union U
  void f(); // hide global f declaration
  f(x);  // ok
}
