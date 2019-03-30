#include <stdio.h>

int main(void)
{
  struct {
    unsigned int is_keyword : 1;
    unsigned int is_extern  : 1;
    unsigned int is_static  : 1;
  } flags;
  printf("flags.is_keyword = %d\n", flags.is_keyword = 0);
  printf("flags.is_extern = %d\n", flags.is_extern = 1);
  printf("flags.is_static = %d\n", flags.is_static = 0);
  printf("flags.is_keyword = %d\n", flags.is_keyword);
  printf("flags.is_extern = %d\n", flags.is_extern);
  printf("flags.is_static = %d\n", flags.is_static);
  return 0;
}
