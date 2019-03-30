#include <stdio.h>
/*
 * One of the following shall hold:
 * - both operands have arithmetic type;
 * - both operands are pointers to qualified or unqualified versions of compatible types;
 * - one operand is a pointer to an object or incomplete type and the other is a pointer to a qualified or unqualified version of void; or
 * - one operand is a pointer and the other is a null pointer constant.
 */

/*
 * Note
 * real type : integer and real floating type
 * arithmetic type : integer and floating type
 * real floating type : float, double, long double
 * floating type : 3 complex types(float, double, long double version)
 *                 and real floating type
 */

void cond1(long double ld, unsigned long long int u64)
{
  printf("cond1 called with ld = %Lf u64 = %llu\n", ld, u64);

  if (ld == u64)
    printf("%Lf == %llu\n", ld, u64);

  if (ld != u64)
    printf("%Lf != %llu\n", ld, u64);
}

void cond2(const char* pc, char* p, char* volatile vp)
{
  printf("cond2 is called\n");

  if (pc == p)
    printf("pc == p\n");

  if (pc != p)
    printf("pc != p\n");

  if (pc == vp)
    printf("pc == vp\n");
    
  if (pc != vp)
    printf("pc != vp\n");

  if (p == vp)
    printf("p == vp\n");

  if (p != vp)
    printf("p != vp\n");
}

struct S;

void cond3(char* pc, void* pv, const struct S* pcs, const void* pcv)
{
  printf("cond3 is called\n");

  if (pc == pv)
    printf("pc == pv\n");

  if (pc != pv)
    printf("pc != pv\n");

  if (pc == pcv)
    printf("pv == pcv\n");

  if (pc != pcv)
    printf("pc != pcv\n");
  
  if (pv == pcs)
    printf("pv == pcs\n");

  if (pv != pcs)
    printf("pv != pcs\n");
}

void cond4(void* pv, char* pc)
{
  printf("cond4 is called\n");
  
  if (pv == 0)
    printf("pv == 0\n");

  if (pv != 0)
    printf("pv != 0\n");

  if (pc == 0)
    printf("pc == 0\n");

  if (pc != 0)
    printf("pc != 0\n");
}

struct S {
  int a;
  char b;
  double c;
};

int main(void)
{
  cond1(3.0L, 3);
  cond1(-0.5L, 3);

  char x, y, z;
  cond2(&x,&y,&z);
  cond2(&x,&x,&z);
  cond2(&x,&y,&y);
  cond2(&x,&y,&x);

  struct S s, s2;
  cond3(&x, &y, &s, &s2);
  cond3(&x, &x, &s, &s);
  cond3(&x, &y, &s, &x);

  cond4(&s, &x);
  cond4(0, &x);
  cond4(&s, 0);

  return 0;
}
