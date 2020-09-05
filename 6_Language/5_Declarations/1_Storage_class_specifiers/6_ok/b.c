struct S {
  int a;
};

struct S s;

void f(struct S* p)
{
  p->a = 1234;
}
