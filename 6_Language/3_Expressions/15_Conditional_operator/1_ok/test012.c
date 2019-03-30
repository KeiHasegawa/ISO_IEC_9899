#include <stdio.h>

int main(void)
{
  char a[3.0 < 4.0 ? 10+4 : 20-3];
  char b[4.0 < 3.0 ? 30*2 : 40/3];
  printf("sizeof a = %d, sizeof b = %d\n", (int)(sizeof a), (int)(sizeof b));
  return 0;
}
