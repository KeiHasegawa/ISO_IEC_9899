/*
 * Check if function declaration is recognized,
 * where function returns incomplete struct type or
 * function parameter is incomplete struct type.
 */
#include <stdio.h>

struct S;
struct S f();
void g(struct S);

int main(void)
{
  printf("hello\n");
  return 0;
}
