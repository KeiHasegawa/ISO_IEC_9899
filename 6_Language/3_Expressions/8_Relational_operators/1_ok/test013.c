/*
 * One of the following shall hold:
 * Å\ both operands have real type;
 * Å\ both operands are pointers to qualified or unqualified versions of compatible object types; or
 * Å\ both operands are pointers to qualified or unqualified versions of compatible incomplete types.
 */

/*
 * Note
 * real type : integer and real floating type
 * arithmetic type : integer and floating type
 * real floating type : float, double, long double
 * floating type : 3 complex types(float, double, long double version)
 *                 and real floating type
 */
#include <stdio.h>

void cond1(unsigned int y, float z)
{
  printf("cond1 called with y = %u z = %f\n", y, z);
  
  if (y < z)
    printf("y < z\n");

  if (y > z)
    printf("y > z\n");

  if (y <= z)
    printf("y <= z\n");

  if (y >= z)
    printf("y >= z\n");
}

void cond2(const char* pc, volatile char* pv, const char* const cpc, volatile char* volatile vpv)
{
  printf("cond2 is called\n");

  if (pc < pv)
    printf("pc < pv\n");

  if (pc < cpc)
    printf("pc < cpc\n");

  if (pc < vpv)
    printf("pc < vpv\n");

  if (pc > pv)
    printf("pc > pv\n");

  if (pc > cpc)
    printf("pc > cpc\n");

  if (pc > vpv)
    printf("pc > vpv\n");
  
  if (pc <= pv)
    printf("pc <= pv\n");

  if (pc <= cpc)
    printf("pc <= cpc\n");

  if (pc <= vpv)
    printf("pc <= vpv\n");
  
  if (pc >= pv)
    printf("pc >= pv\n");

  if (pc >= cpc)
    printf("pc >= cpc\n");

  if (pc >= vpv)
    printf("pc >= vpv\n");
}


struct S;

void cond3(const struct S* pc, volatile struct S* pv, const struct S* const cpc, volatile struct S* volatile vpv)
{
  printf("cond3 is called\n");

  if (pc < pv)
    printf("pc < pv\n");

  if (pc < cpc)
    printf("pc < cpc\n");

  if (pc < vpv)
    printf("pc < vpv\n");

  if (pc > pv)
    printf("pc > pv\n");

  if (pc > cpc)
    printf("pc > cpc\n");

  if (pc > vpv)
    printf("pc > vpv\n");
  
  if (pc <= pv)
    printf("pc <= pv\n");

  if (pc <= cpc)
    printf("pc <= cpc\n");

  if (pc <= vpv)
    printf("pc <= vpv\n");
  
  if (pc >= pv)
    printf("pc >= pv\n");

  if (pc >= cpc)
    printf("pc >= cpc\n");

  if (pc >= vpv)
    printf("pc >= vpv\n");
}

struct S {
  char a[128];
};

int main()
{
  cond1(23u, 24.0F);

  struct S s[4];
  cond2(&s[0].a[0], &s[0].a[1], &s[0].a[2], &s[0].a[3]);

  cond3(&s[3], &s[2], &s[1], &s[0]);
  
  return 0;
}
