#include <stdio.h>

const char* f()
{
  static char a[] = "Brian W. Kernighan";
  return a;
}

int main()
{
  const char* x = "Kernighan";
  const char* y = "Richie";
  const char* z = "Programming language C";

  printf("x = %s\n",x);
  printf("y = %s\n",y);
  printf("z = %s\n",z);
  x = f();
  printf("x = %s\n",x);
  printf("y = %s\n",y);
  printf("z = %s\n",z);
  return 0;
}
