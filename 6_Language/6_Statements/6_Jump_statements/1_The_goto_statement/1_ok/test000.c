/*
 * Check if goto statement works well.
 */
#include <stdio.h>

void test000(void)
{
  printf("`test000' called\n");
  goto label1;
 label2:
  printf("label2\n");
  return;
 label1:
  printf("label1\n");
  goto label2;
  printf("error\n");
}

void test001(int n)
{
  printf("`test001' called\n");
  {
    int flag = 0;
  label1:
    if ( flag )
      goto label2;
    int a[n];
    for ( int i = 0 ; i < n ; ++i ){
      if ( i + 3 == n ){
	flag = 1;
	goto label1;
      }
      printf(" %d", a[i] = i);
    }
  label2:
    printf("\n");
  }
}

int main(void)
{
  test000();
  test001(8);
  return 0;
}
