/*
 * Check error if undeclared variable is used in assignment operators
 */
void test000(void)
{
  a = 1;
  b = c;
  d *= e;
  f /= g;
  h %= i;
  j += k;
  l -= m;
  n <<= o;
  p >>= q;
  r &= s;
  t ^= u;
  v |= w;
}

void test001_subr(int);

void test001(void)
{
  test001_subr(a = 1);
  test001_subr(b = c);
  test001_subr(d *= e);
  test001_subr(f /= g);
  test001_subr(h %= i);
  test001_subr(j += k);
  test001_subr(l -= m);
  test001_subr(n <<= o);
  test001_subr(p >>= q);
  test001_subr(r &= s);
  test001_subr(t ^= u);
  test001_subr(v |= w);
}
