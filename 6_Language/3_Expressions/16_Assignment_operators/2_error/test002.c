/*
 * Check the result of assignment operator is not lvalue.
 */
void test000(void)
{
  int a; (a = 1) = 2;
  int b; (b *= 3) = 4;
  int c; (c /= 5) = 6;
  int d; (d %= 7) = 8;
  int e; (e += 9) = 10;
  int f; (f -= 11) = 12;
  int g; (g <<= 13) = 14;
  int h; (h >>= 15) = 16;
  int i; (i &= 17) = 18;
  int j; (j ^= 19) = 20;
  int k; (k |= 21) = 22;
}

void test001(void)
{
  int a; &(a = 1);
  int b; &(b *= 3);
  int c; &(c /= 5);
  int d; &(d %= 7);
  int e; &(e += 9);
  int f; &(f -= 11);
  int g; &(g <<= 13);
  int h; &(h >>= 15);
  int i; &(i &= 17);
  int j; &(j ^= 19);
  int k; &(k |= 21);
}
