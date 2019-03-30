/*
 * Check ISO sample works well
 */
#include <stdio.h>

void test000(void)
{
  printf("`test000' called\n");
  const struct s { int mem; } cs = { 1 };
  struct s ncs; // the object ncs is modifiable
  typedef int A[2][3];
  const A a = {{4, 5, 6}, {7, 8, 9}}; // array of array of
                                      // const int
  int *pi;
  const int *pci;
  ncs = cs; // valid
  pi = &ncs.mem; // valid
  pci = &cs.mem; // valid

  printf("%d\n", cs.mem);
  printf("%d\n", ncs.mem);
  printf("%d\n", * pi);
  printf("%d\n", * pci);

  for ( int i = 0 ; i < sizeof a/sizeof a[0] ; ++i ){
    for ( int j = 0 ; j < sizeof a[0]/sizeof a[0][0] ; ++j )
      printf(" %d", a[i][j]);
    printf("\n");
  }
}

int main(void)
{
  test000();
  return 0;
}


