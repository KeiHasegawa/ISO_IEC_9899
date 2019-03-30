#include <stdio.h>

void label_aaa();

void g();

void f(int a)
{
  if (a)
    goto label_aaa;
  label_aaa();  
label_aaa:
  g();
}

int main()
{
  f(0);
  f(1);
  return 0;
}

void label_aaa()
{
  printf("`label_aaa' called\n");
}

void g()
{
  printf("`g' called\n");
}

