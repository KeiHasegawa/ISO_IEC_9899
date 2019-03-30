/*
 * sizeof member of a struct type is not equal to the sum of sizeof member
 * type.
 */
#include <stdio.h>

/* sizeof(struct odd) may be 8 */
struct odd {
  int a;
  char c;
};

struct odd global_array[] = {
  { 1, 'a' },
  { 2, 'b' },
  { 3, 'c' },
  { 4, 'd' },
};

void print_odds(int size, struct odd* p)
{
  while ( size-- ){
    printf("%d %c\n", p->a, p->c);
    ++p;
  }
}

int main(void)
{
  int size = sizeof global_array/sizeof global_array[0];
  printf("global_array :\n");
  print_odds(size,&global_array[0]);
  struct odd local_array[7];
  size = sizeof local_array/sizeof local_array[0];
  for ( int i = 0 ; i < size ; ++i ){
    local_array[i].a = i + 100;
    local_array[i].c = i + 'A';
  }
  printf("local_array :\n");
  print_odds(size,&local_array[0]);
  return 0;
}
