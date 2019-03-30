/*
 * Check if types of integer constant are
 * recognized.
 */

#include <stdio.h>

void a(void)
{
  if ( 0xffffffff > 1 )
    printf("ok\n");
  else
    printf("error\n");
}

void b(void)
{
  if ( -1 < 1 )
    printf("ok\n");
  else
    printf("error\n");

  if ( -1u < 1 )
    printf("error\n");
  else
    printf("ok\n");

  if ( -1U < 1 )
    printf("error\n");
  else
    printf("ok\n");

  if ( -1l < 1 )
    printf("ok\n");
  else
    printf("error\n");

  if ( -1L < 1 )
    printf("ok\n");
  else
    printf("error\n");
}

void c(void)
{
  printf("%d\n", 0123);
  printf("%d\n", 123);
  printf("%d\n", 0x123);
}

void d(void)
{
  printf("%ld\n", 1l);
  printf("%ld\n", 2L);
  printf("%u\n", 3u);
  printf("%u\n", 4U);
  printf("%lu\n", 5ul);
  printf("%lu\n", 6uL);
  printf("%lu\n", 7Lu);
  printf("%lu\n", 8LU);
  printf("%lld\n", 9ll);
  printf("%lld\n", 10LL);
  printf("%lld\n", 11ull);
  printf("%lld\n", 12uLL);
  printf("%lld\n", 13Ull);
  printf("%lld\n", 14ULL);
  printf("%lld\n", 15llu);
  printf("%lld\n", 16llU);
  printf("%lld\n", 17LLu);
  printf("%lld\n", 18LLU);
}

int main(void)
{
  a();
  b();
  c();
  d();
  return 0;
}
