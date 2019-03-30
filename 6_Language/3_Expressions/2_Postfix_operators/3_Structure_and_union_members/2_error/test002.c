/*
 * Check if qualified structure is recognized.
 * Check if pointer to qualified structure is recognized.
 * Check if qualified member is recognzied.
 */

struct T {
  int a;
  int b[10];
};

void f(const struct T t)
{
  t.a = 2;         /* error. not modifiable */
  t.b[3] = 4;      /* error. not modifiable */
}

void g(const struct T* pt)
{
  pt->a = 5;       /* error. not modifiable */
  pt->b[6] = 7;    /* error. not modifiable */
}

struct S {
  const int a;
  const int b[10];
};

void x(struct S s)
{
  s.a = 1;         /* error. not modifiable */
  s.b[2] = 3;      /* error. not modifiable */
}

void y(struct S* ps)
{
  ps->a = 4;       /* error. not modifiable */
  ps->b[5] = 6;    /* error. not modifiable */
}
