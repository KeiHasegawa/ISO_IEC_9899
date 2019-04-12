struct S {
  char* pc;
  int* pi;
};

void f(struct S* ps)
{
  ps->pc = ps->pi = 0;  // error
}

void g(struct S* ps)
{
  ps->pc = ps->pi = ((void *)0);  // error
}
