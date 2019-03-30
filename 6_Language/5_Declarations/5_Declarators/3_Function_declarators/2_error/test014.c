/*
 * Check if refering to undeclare type `T' is error.
 */

void x()
{
  int f(struct S *, T *);

  int g(struct S *, T *);

  T* h(struct S *);
}

