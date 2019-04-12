char* pc;
int* pi;

void f()
{
  pc = pi = 0;  // error
}

void g()
{
  pc = pi = ((void *)0);  // error
}
