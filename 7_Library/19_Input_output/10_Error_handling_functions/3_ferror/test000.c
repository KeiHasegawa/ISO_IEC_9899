#include <stdio.h>

int main()
{
  int c;
  while ((c = getc(stdin)) != EOF)
    putc(c, stdout);
  int n = ferror(stdin);
  printf("n = %d\n", n);
  return 0;
}
