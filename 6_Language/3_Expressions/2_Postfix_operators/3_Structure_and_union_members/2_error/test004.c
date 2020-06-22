int a;

int b;

struct S {
  int m;
};

void f(struct S* p)
{
  p->a;  /* error */
}

void g(struct S s)
{
  s.b;  /* error */
}
