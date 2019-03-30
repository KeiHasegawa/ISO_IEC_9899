/*
 * Check if floating constant is not lvalue.
 */
void test00(void)
{
  1.0F = 2.0F;
  0xab.cdp+2 = 0x12.34p-2;
  5.6e+7L = 8.9E-1;
}

void test01(void)
{
  &0x1p2F;
  &3.45;
  &6.L;
}

void test02(int n)
{
  switch ( n ){
  case 0XABP2F:
    break;
  case .1:
    break;
  case .3e-5L:
    break;
  }
}
