/*
 * Check the result type of conditional operator expr1 ? expr2 : expr3,
 * where expr2 and expr3 are pointer type.
 */
int f(int a, const int* pc, volatile int* pv)
{
  const volatile int* p = a ? pc : pv;
  return *p;
}

int g(int a, const int* pc, volatile int* pv)
{
  const int* p = a ? pc : pv;  // error
  return *p;
}

int h(int a, const int* pc, volatile int* pv)
{
  volatile int* p = a ? pc : pv;  // error
  return *p;
}

const int ci;

volatile int vi;

const volatile int* x = (1 + 2) ? &vi : &ci;

const int* y = (1 / 2) ? &vi : &ci;  // error

volatile int* z = (1 % 2) ? &vi : &ci;  // error
