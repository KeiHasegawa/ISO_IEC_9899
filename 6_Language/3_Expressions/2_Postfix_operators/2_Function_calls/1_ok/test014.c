/*
 * Check if recursive call works well.
 */
#include <stdio.h>

extern int a[];

void quicksort(int m, int n)
{
  if ( n <= m ) return;
  int i = m - 1;
  int j = n;
  int v = a[n];
  while ( 1 ) {
    do ++i; while ( a[i] < v );
    do --j; while ( a[j] > v );
    if ( i >= j ) break;
    int x = a[i]; a[i] = a[j]; a[j] = x;
  }
  int x = a[i]; a[i] = a[n]; a[n] = x;
  quicksort(m,j); quicksort(i+1,n);
}

int a[] = { -3, 2, 1, 5, 10, 0, -7, 100, 25, 3, 9 , 9 };

int main(void)
{
  quicksort(0,sizeof a/sizeof a[0]-1);
  for ( int i = 0 ; i != sizeof a/sizeof a[0] ; ++i )
    printf(" %d", a[i]);
  printf("\n");
  return 0;
}
