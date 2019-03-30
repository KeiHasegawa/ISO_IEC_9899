/*
 * Check if the operand of the unary + or - operator shall have arithmetic
 * type; of the ~ operator, integer type; of the ! operator, scalar type.
 */

void test00(void)
{
  float a; ~a;
  double b; ~b;
  long double c; ~c;
}

void test01(void)
{
  int* a; +a;
  char* b; -b;
  void* c; ~c;
  +(int*)3;
  -(char*)4;
  ~(void*)5;
}

void test02(void)
{
  struct S { int a; } s;
  +s;
  -s;
  ~s;
  !s;
  union U { int a; } u;
  +u;
  -u;
  ~u;
  !u;
}

void test03(void)
{
  extern struct S s;
  +s;
  -s;
  ~s;
  !s;
  extern union U u;
  +u;
  -u;
  ~u;
  !u;
  extern enum E e;
  +e;
  -e;
  ~e;
  !e;
}
