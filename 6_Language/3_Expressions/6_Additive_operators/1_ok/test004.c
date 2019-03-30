/*
 * Check if binary operator '-' works well, where both operands are pointers
 * to qualified or unqualified versions of compatible object types
 */
#include <stdio.h>

void test00(const char* a, char* const b)
{
  printf("`test00' called\n");
  printf("%ld\n", a - b);
}

void test01(volatile int* const a, const volatile int* b)
{
  printf("`test01' called\n");
  printf("%ld\n", a - b);
}

void test02(char** a, char** b)
{
  printf("`test02' called\n");
  printf("%ld\n", a - b);
}

void test03(long long int** a, long long int** b)
{
  printf("`test03' called\n");
  printf("%ld\n", a - b);
}

void test04(unsigned short int (*a)[3], unsigned short int (*b)[3])
{
  printf("`test04' called\n");
  printf("%ld\n", a - b);
}

void test05(long double (*a)[3], long double (*b)[3])
{
  printf("`test05' called\n");
  printf("%ld\n", a - b);
}

struct S {
  int byte[10];
};

void test06(const struct S* a, volatile struct S* b)
{
  printf("`test06' called\n");
  printf("%ld\n", a - b);
}

int main(void)
{
  {
    char array[10];
    test00(&array[3],&array[0]);
  }
  {
    int array[10];
    test01(&array[3],&array[0]);
  }
  {
    char *array[10];
    test02(&array[3],&array[0]);
  }
  {
    long long int *array[10];
    test03(&array[3],&array[0]);
  }
  {
    unsigned short int array[10][3];
    test04(&array[3],&array[0]);
  }
  {
    long double array[10][3];
    test05(&array[3],&array[0]);
  }
  {
    struct S array[10];
    test06(&array[3],&array[0]);
  }
  return 0;
}
