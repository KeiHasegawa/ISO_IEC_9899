/*
 * Check result of unary arithmetic operator is not lvalue.
 */
void test00(void)
{
  int a;
  char* b;
  long int c[10];
  long double* d;

  +a = 1;
  -*b = 2;
  ~c[3] = 3;
  !d = 4;
}

void test01(void)
{
  int a;
  char* b;
  long int c[10];
  long double* d;

  &+a;
  &-*b;
  &~c[3];
  &!d;
}
