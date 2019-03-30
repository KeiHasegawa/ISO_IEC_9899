#include <stdio.h>

int main(void)
{
  char a[] = "hasegawa %c";
  printf("%s,'%c'\n",&a[0],'a');
  printf(a,'a');
  printf("\n");
  return 0;
}
