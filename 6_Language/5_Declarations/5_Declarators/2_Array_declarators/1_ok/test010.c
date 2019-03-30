/*
 * Check if VLA deallocate timing is valid.
 */
#include <stdio.h>

void f(int n)
{
  int a[n];  // allocate `a'
  for ( int i = 0 ; i != n ; ++i )
    a[i] = 10 * i;

  printf("a:");
  for ( int i = 0 ; i != n ; ++i )
    printf(" %d", a[i]);
  printf("\n");
  {
    int b[n]; // allocate `b'
    for ( int i = 0 ; i != n ; ++i )
      b[i] = 100 * i;

    printf("a:");
    for ( int i = 0 ; i != n ; ++i )
      printf(" %d", a[i]);
    printf("\n");
    
    printf("b:");
    for ( int i = 0 ; i != n ; ++i )
      printf(" %d", b[i]);
    printf("\n");
    // maybe `b' is deallocated
  }

  int c[n];  // allocate `c'. The area of `c' may be the same with area of `b'
  for ( int i = 0 ; i != n ; ++i )
    c[i] = 1000 * i;

  printf("a:");
  for ( int i = 0 ; i != n ; ++i )
    printf(" %d", a[i]);
  printf("\n");
  
  printf("c:");
  for ( int i = 0 ; i != n ; ++i )
    printf(" %d", c[i]);
  printf("\n");
}

int main(void)
{
  f(10);
  return 0;
}

