/*
 * Check if sizeof operator is recognized.
 */
#include <stdio.h>

/* for array */
void test00(void)
{
  printf("`test00' called\n");
  int a[10];
  printf("sizeof a = %d\n", (int)(sizeof a));
  printf("sizeof(int [10]) = %d\n", (int)(sizeof(int [10])));

  int b[3][4][5];
  printf("sizeof b = %d\n", (int)(sizeof b));
  printf("sizeof b[0] = %d\n", (int)(sizeof b[0]));
  printf("sizeof b[0][1] = %d\n", (int)(sizeof b[0][1]));
  printf("sizeof b[0][1][2] = %d\n", (int)(sizeof b[0][1][2]));

  int (*c)[3][4][5];
  printf("sizeof *c = %d\n", (int)(sizeof *c));
  printf("sizeof *(int (*)[3][4][5])0 = %d\n",
         (int)(sizeof *(int (*)[3][4][5])0));
}

/* for struct */
void test01(void)
{
  printf("`test01' called\n");
  struct S {
    int a;
    int b;
  } s;
  printf("sizeof s = %d\n", (int)(sizeof s));
  printf("sizeof(struct S) = %d\n", (int)sizeof(struct S));

  struct S* ps;
  printf("sizeof *ps = %d\n", (int)(sizeof *ps));
  printf("sizeof *(struct S*)2 = %d\n", (int)(sizeof *(struct S*)2));
}

/* for union */
void test02(void)
{
  printf("`test02' called\n");
  union U {
    int a;
    int b;
  } u;
  printf("sizeof u = %d\n", (int)(sizeof u));
  printf("sizeof(union U) = %d\n", (int)sizeof(union U));

  union U* pu;
  printf("sizeof *pu = %d\n", (int)(sizeof *pu));
  printf("sizeof *(union U*)5 = %d\n", (int)(sizeof *(union U*)5));
}

int n = sizeof printf("hello world\n");

void test03(void)
{
  printf("`test03' called\n");
  printf("n = %d\n", n);
  switch ( n ){
  case sizeof printf("howdy\n"):
    printf("case sizeof printf(\"howdy\\n\"):\n");
    break;
  default:
    printf("default:\n");
    break;
  }
}

int main(void)
{
  test00();
  test01();
  test02();
  test03();
  return 0;
}
