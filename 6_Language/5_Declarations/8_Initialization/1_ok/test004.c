/*
 * Check if initialzers are well done, where
 * initializer is constructed from various expression.
 */
#include <stdio.h>

extern double func(void);
extern void rel(int, int);
extern void logic(int, int);

int main(void)
{
  int a = 1;
  printf("a = %d\n", a);
  int b = a;
  printf("b = %d\n", b);
  int c = (a+b);
  printf("c = %d\n", c);
  const char* d = "Brian Kernighan";
  printf("d = \"%s\"\n", d);
  char e = d[6];
  printf("e = '%c'\n", e);
  double f = func();
  printf("f = %f\n", f);
  struct S {
    int a;
    float b;
  } g = { 1, 2 };
  printf("g.b = %f\n", g.b);
  struct S* h = &g;
  printf("h->a = %d\n", h->a);
  int i = a++;
  printf("i = %d, a = %d\n", i, a);
  int j = b--;
  printf("j = %d, b = %d\n", j, b);
  int k = (struct S){3,4}.b;
  printf("k = %d\n", k);
  int l = ++a;
  printf("l = %d, a = %d\n", l, a);
  int m = --b;
  printf("m = %d, b = %d\n", m, b);
  int* n = &a;
  printf("*n = %d\n", *n);
  int o = *n;
  printf("o = %d\n", o);
  float p = +g.a;
  printf("p = %f\n", p);
  int q = -g.b;
  printf("q = %d\n", q);
  int r = ~m;
  printf("r = %d\n", r);
  int s = !r;
  printf("s = %d\n", s);
  int t = (char)g.b;
  printf("t = %d\n", t);
  a = 11;
  b = 3;
  int u = a * b;
  printf("u = %d\n", u);
  int v = a / b;
  printf("v = %d\n", v);
  int w = a % b;
  printf("w = %d\n", w);
  int x = a + b;
  printf("x = %d\n", x);
  int y = a - b;
  printf("y = %d\n", y);
  int z = a << b;
  printf("z = %d\n", z);
  int A = a >> b;
  printf("A = %d\n", A);
  a = 1, b = 2;
  rel(a,b);
  a = 2, b = 2;
  rel(a,b);
  a = 3, b = 2;
  rel(a,b);
  a = 0xc;
  b = 0xa;
  int B = a & b;
  printf("B = %d\n", B);
  int C = a ^ b;
  printf("C = %d\n", C);
  int D = a | b;
  printf("D = %d\n", D);
  a = 0, b = 0, logic(a,b);
  a = 0, b = 1, logic(a,b);
  a = 1, b = 0, logic(a,b);
  a = 1, b = 1, logic(a,b);
  int E = f ? 3 : 5;
  printf("E = %d\n", E);
  int F = A = B;
  printf("F = %d, A = %d, B = %d\n", F, A, B);
  int G = A *= B;
  printf("G = %d, A = %d, B = %d\n", G, A, B);
  int H = A /= B;
  printf("I = %d, A = %d, B = %d\n", H, A, B);
  int I = A %= B;
  printf("J = %d, A = %d, B = %d\n", I, A, B);
  A = 3, B = 4;
  int J = A += B;
  printf("K = %d, A = %d, B = %d\n", J, A, B);
  int K = A -= B;
  printf("L = %d, A = %d, B = %d\n", K, A, B);
  int L = A <<= B;
  printf("M = %d, A = %d, B = %d\n", L, A, B);
  int M = A >>= B;
  printf("N = %d, A = %d, B = %d\n", M, A, B);
  A = 0xc, B = 0xa;
  int N = A &= B;
  printf("O = %d, A = %d, B = %d\n", N, A, B);
  int O = A ^= B;
  printf("P = %d, A = %d, B = %d\n", O, A, B);
  int P = A |= B;
  printf("P = %d, A = %d, B = %d\n", P, A, B);
  int Q = (G, I);
  return 0;
}

double func(void)
{
  return -0.5;
}

void rel(int a, int b)
{
  int xx = a < b;
  printf("xx = %d\n", xx);
  int yy = a <= b;
  printf("yy = %d\n", yy);
  int zz = a >= b;
  printf("zz = %d\n", zz);
  int uu = a > b;
  printf("uu = %d\n", uu);
  int vv = a == b;
  printf("vv = %d\n", vv);
  int ww = a != b;
  printf("ww = %d\n", ww);
}

void logic(int a, int b)
{
  int xx = a && b;
  printf("xx = %d\n", xx);
  int yy = a || b;
  printf("yy = %d\n", yy);
}
