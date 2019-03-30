/*
 * Check if parameter scope union declaration works well.
 * (abstract declarator parameter scope at block scope function declaration)
 */
union U {
  char c[4];
  int i;
};

void f(union U);

void f2(union U { char c[4]; int i; });

void f3(union U { char c[4]; int i; } u)
{
  void f4(union U { char c[4]; int i; });

  void f5(void (*)(union U { char c[4]; int i; }));

  void f6(void (*)(union U));
  
  f5(&f);   // error
  f6(&f);   // error
  f5(&f2);  // error
  f6(&f2);  // error
  f5(&f3);  // error
  f6(&f3);  // ok
  f5(&f4);  // error
  f6(&f4);  // error
}
