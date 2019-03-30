#include <stdio.h>

static inline void *mymemcpy(void *dest, const void *src, unsigned int n)
{
  int d0, d1, d2;
  asm(
	   "cld		\n\t"
	   "rep movsd	\n\t"
	   "test %4, 2	\n\t"
	   "je 1f	\n\t"
	   "movsw	\n"
	   "1:		\t"
	   "test %4, 1	\n\t"
	   "je 2f	\n\t"
	   "movsb	\n"
	   "2:		\t"
	   : "=&c" (d0), "=&D" (d1), "=&S" (d2)
	   : "0" (n/4), "r" (n), "1" ((long) dest), "2" ((long) src)
	   : "memory");
  return dest;
}

int main(void)
{
  char a[] = "hasegawa";
  char b[] = "abcdefgh";
  printf("a = %s\n", a);
  printf("b = %s\n", b);
  mymemcpy(&a[0], &b[0], sizeof a);
  printf("a = %s\n", a);
  printf("b = %s\n", b);
  return 0;
}

