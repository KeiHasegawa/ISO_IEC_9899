/*
 * Check expression statement works well.
 */
#include <stdio.h>

void test000(int n)
{
  printf("`test000' called with %d\n", n);
  n + 5;
  ;  /* null expression statement */
}

void test001(void)
{
  int p(int);
  (void)p(0);
}

int p(int n)
{
  printf("`p' called with %d\n", n);
}

void test002(void)
{
  static char a[40] = "Programming";
  char *s;
  s = &a[0];
  while (*s++ != '\0')
    ;
  --s;
  *s++ = ' ';
  *s++ = 'l';
  *s++ = 'a';
  *s++ = 'n';
  *s++ = 'g';
  *s++ = 'u';
  *s++ = 'a';
  *s++ = 'g';
  *s++ = 'e';
  *s++ = 's';
  printf("%s\n", a);
}

void test003(int loop1, int loop2, int want_out)
{
  while (loop1) {
    printf("loop1 = %d\n", loop1);
    while (loop2) {
      printf("loop2 = %d\n", loop2);
      if (want_out)
	goto end_loop1;
      want_out = loop1 / loop2;
      --loop2;
      if ( want_out )
	loop1 -= 2;
    }
  end_loop1: ; /* null expression statement */
  }
}

int main(void)
{
  test000(-5);
  test001();
  test002();
  test003(2,3,0);
  return 0;
}
