/*
 * Check if ISO sample works well.
 * See also ../2_error/test001.c
 */
#include <stdio.h>

int i1 = 1; // definition, external linkage
static int i2 = 2; // definition, internal linkage
extern int i3 = 3; // definition, external linkage
int i4; // tentative definition, external linkage
static int i5; // tentative definition, internal linkage
int i1; // valid tentative definition, refers to previous
int i3; // valid tentative definition, refers to previous
int i4; // valid tentative definition, refers to previous
extern int i1; // refers to previous, whose linkage is external
extern int i3; // refers to previous, whose linkage is external
extern int i4; // refers to previous, whose linkage is external

int main(void)
{
  printf("i1 = %d\n", i1);
  printf("i2 = %d\n", i2);
  printf("i3 = %d\n", i3);
  printf("i4 = %d\n", i4);
  printf("i5 = %d\n", i5);
  return 0;
}
