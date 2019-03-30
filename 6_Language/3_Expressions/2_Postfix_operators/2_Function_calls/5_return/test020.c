#include <stdio.h>

const char* x = "Kernighan";
const char* y = "Richie";
const char* z = "Programming language C";

const char* f()
{
  static char a[] = "Dennis M. Richie";
  return a;
}

int main()
{
  printf("x = %s\n",x);
  printf("y = %s\n",y);
  printf("z = %s\n",z);
  y = f();
  printf("x = %s\n",x);
  printf("y = %s\n",y);
  printf("z = %s\n",z);
  return 0;
}
