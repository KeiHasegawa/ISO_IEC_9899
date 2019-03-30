#include <stdio.h>


int a = 1;

int main(void)
{
  printf("a = %d\n", a);
  {
    int a = 2;
    printf("a = %d\n", a);
    {
      int a = 3;
      printf("a = %d\n", a);
      {
	int a = 4;
	printf("a = %d\n", a);
	{
	  int a = 5;
	  printf("a = %d\n", a);
	}
	printf("a = %d\n", a);
      }
      printf("a = %d\n", a);
    }
    printf("a = %d\n", a);
  }
  printf("a = %d\n", a);
  {
    int a = 7;
    printf("a = %d\n", a);
    {
      int a = 8;
      printf("a = %d\n", a);
    }
    printf("a = %d\n", a);
    {
      int a = 9;
      printf("a = %d\n", a);
    }
    printf("a = %d\n", a);
  }
  printf("a = %d\n", a);
  return 0;
}
