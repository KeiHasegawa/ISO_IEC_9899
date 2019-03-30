#include <stdio.h>

int main(void)
{
  static int a = 1;
  printf("a = %d\n",a);
  a = 101;
  {
    static int a = 2;
    printf("a = %d\n",a);
    a = 102;
    {
      static int a = 3;
      printf("a = %d\n",a);
      a = 103;
      {
	static int a = 4;
	printf("a = %d\n",a);
	a = 104;
	printf("a = %d\n",a);
      }
      printf("a = %d\n",a);
    }
    printf("a = %d\n",a);
  }
  printf("a = %d\n",a);
  return 0;
}
