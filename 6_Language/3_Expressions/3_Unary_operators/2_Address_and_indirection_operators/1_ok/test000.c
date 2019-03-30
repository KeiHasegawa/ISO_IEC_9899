/*
 * Check if the operand of the unary & operator shall be either a function
 * designator, the result of a [] or unary * operator, or an lvalue that
 * designates an object that is not a bit-field and is not declared with
 * the register storage-class specifier.
 *
 * Check if the operand of the unary * operator shall have pointer type.
*/
#include <stdio.h>

void f(void)
{
  printf("`f' called\n");
}

/* function designator */
void test00(void)
{
  printf("`test00' called\n");
  void (*pf)(void) = &f;
  (*pf)();
}

/* result of [] operator */
void test01(char* p, int i)
{
  printf("`test01' called\n");
  char* q = &p[i];
  printf("*q = '%c'\n", *q);
}

/* result of unary * operator */
void test02(long long int* p)
{
  printf("`test02' called\n");
  long long int* q = &*p;
  printf("*q = %lld\n", *q);
  unsigned long long int* r = &*(unsigned long long int*)2;
  printf("r = %d\n", (int)r);
}

void test03(long long int a)
{
  printf("`test03' called\n");
  long long int* q = &a;
  printf("*q = %lld\n", *q);
}

void test04(int* const volatile q)
{
  printf("`test04' called\n");
  printf("*q = %d\n", *q);
}

int test05(void)
{
  return *((const volatile int*)0);
}

int main(void)
{
  test00();
  test01("hello world\n", 6);
  test02(&(long long int){ 3 });
  test03(4);
  test04(&(int){5});
  return 0;
}
