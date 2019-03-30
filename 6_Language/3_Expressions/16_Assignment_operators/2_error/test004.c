/*
 * Check error if the opearnds of compound assignment operatos are invalid.
 */

void test000(void)
{
  struct S { int a; };
  struct S x;
  struct S y;
  x *= 1;
  x /= 2;
  x %= 3;
  x += 4;
  x /= 5;
  x <<= 6;
  x >>= 7;
  x &= 8;
  x |= 9;
  x ^= 10;
}

void test001(void)
{
  int* x;
  int* y;
  x *= 1;
  x /= 2;
  x %= 3;
  x += y;
  x -= y;
  x <<= 4;
  x >>= 5;
  x &= 6;
  x ^= 7;
  x |= 8;
}

void test002(void)
{
  {
    void* x;
    x += 1;
    x -= 2;
  }
  {
    struct S;
    struct S* x;
    x += 3;
    x += 4;
  }
}

void test003(void)
{
  float x;
  double y;
  long double z;
  x %= 1;
  y %= 2;
  z %= 3;
  x >>= 4;
  y >>= 5;
  z >>= 6;
  x <<= 7;
  y <<= 8;
  z <<= 9;
  x &= 10;
  y &= 11;
  z &= 12;
  x ^= 13;
  y ^= 14;
  z ^= 15;
  x |= 16;
  y |= 17;
  z |= 18;
}

