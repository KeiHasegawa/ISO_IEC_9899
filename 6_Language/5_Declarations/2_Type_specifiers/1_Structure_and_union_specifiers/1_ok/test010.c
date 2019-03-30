/*
 * Check if aggregate type parameter works well in
 *
 * x := y
 * x := &y
 * *y := z
 * x := *y
 * x[y] := z (where y is constant or isn't)
 * x := y[z] (where z is constant or isn't)
 * param y
 * x := call y
 * return y
 * x := va_start y
 * x := va_arg y, T
 */
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

/* very small structure */
struct S1 {
  char c[1];
};

/* Especially, test x := y */
void test000(struct S1 a, struct S1 b)
{
  printf("`test000' called\n");
  printf("a.c[0] = %c b.c[0] = %c\n", a.c[0], b.c[0]);
  a = b;
  printf("a.c[0] = %c b.c[0] = %c\n", a.c[0], b.c[0]);
  struct S1 c = { 'x' };
  printf("a.c[0] = %c b.c[0] = %c c.c[0] = %c\n", a.c[0], b.c[0], c.c[0]);
  a = c;
  printf("a.c[0] = %c b.c[0] = %c c.c[0] = %c\n", a.c[0], b.c[0], c.c[0]);  
  c = b;
  printf("a.c[0] = %c b.c[0] = %c c.c[0] = %c\n", a.c[0], b.c[0], c.c[0]);
  b = a;
  printf("a.c[0] = %c b.c[0] = %c c.c[0] = %c\n", a.c[0], b.c[0], c.c[0]);  
}

struct S2 {
  int i;
  char c[1024];
  double d;
};

void test001_print(struct S2 x, struct S2 y, struct S2 z)
{
  printf("x.i = %d x.c = %s x.d = %f\n", x.i, x.c, x.d);
  printf("y.i = %d y.c = %s y.d = %f\n", y.i, y.c, y.d);
  printf("z.i = %d z.c = %s z.d = %f\n", z.i, z.c, z.d);
}

/* Especially, test x := y, param y */
void test001(struct S2 x, struct S2 y)
{
  printf("`test001' called\n");
  struct S2 z = { 123, "hoge hoge", 1.5 };
  test001_print(x, y, z);
  x = y;
  test001_print(x, y, z);
  z = y;
  test001_print(x, y, z);
  x = z;
  test001_print(x, y, z);
  z = y;
  test001_print(x, y, z);
}

struct S3 {
  char cc[3];
  struct S2 s;
  char ccc[5];
};

void test002_print(struct S2 a, struct S3 b, struct S2 c)
{
  printf("a.i = %d, a.c = %s, a.d = %f\n", a.i, a.c, a.d);
  printf("b.cc = %s, b.s.i = %d, b.s.c = %s, b.s.d = %f, b.ccc = %s\n",
	 b.cc, b.s.i, b.s.c, b.s.d, b.ccc);
  printf("c.i = %d, c.c = %s, c.d = %f\n", c.i, c.c, c.d);
}

struct S3 test002_subr(struct S3);

/*
 * Especially test x := y, x[y] := z, x := y[z],
 * param y, x := call y, return y
 */
struct S2 test002(struct S2 a, struct S3 b, struct S2 c)
{
  printf("`test002' called\n");
  test002_print(a, b, c);
  b.s = a;
  test002_print(a, b, c);  
  a = c;
  test002_print(a, b, c);  
  c = b.s;
  test002_print(a, b, c);

  b = test002_subr(b);
  test002_print(a, b, c);  

  return b.cc[0] == c.i ? a : c;
}

/* Especially test x := &y */
struct S3 test002_subr(struct S3 x)
{
  struct S3* p = &x;
  p->cc[0] = 'A';
  strcpy(&p->s.c[0], "abcdefghijklmnopqrstuvwxyz");
  p->ccc[1] = 'B';
  return x;
}

/* Especially test *y := z */
void test003_subr1(struct S2* y, struct S2 z)
{
  *y = z;
}

/* Especially test x := *y, return y */
struct S2 test003_subr2(struct S2 x, struct S2* y)
{
  x = *y;
  return x;
}

void test003_print(struct S2* p)
{
  printf("%d", p->i);
  printf(" %s", p->c);
  printf(" %f\n", p->d);
}

/* Especially test *x := y, x := *y */
void test003(void)
{
  printf("`test003' called\n");
  struct S2 x = { 45,  "ABCDEFG", -20.0 };
  struct S2 y = { -30, "hijklmnopqrstu", 1 };
  test003_subr1(&x, y);
  printf("x = "); test003_print(&x);
  printf("y = "); test003_print(&y);

  struct S2 z = { 0xabc, "def", 5 };
  struct S2 w = test003_subr2(x, &z);
  printf("x = "); test003_print(&x);
  printf("y = "); test003_print(&y);
  printf("z = "); test003_print(&z);
  printf("w = "); test003_print(&w);
}

/* Especially test x := va_start y, x := va_arg y, T */
void test004_subr(struct S2 s, ...)
{
  va_list ap;
  va_start(ap,s);
  printf("s.i = %d s.c = %s s.d = %f\n", s.i, s.c, s.d);
#ifdef USE_BUILTIN_VA_ARG
  struct S3 s3 = __builtin_va_arg(ap, struct S3);
#else // USE_BUILTIN_VA_ARG
  struct S3 s3 = va_arg(ap, struct S3);
#endif // USE_BUILTIN_VA_ARG
  printf("s3.cc = %s s3.s.i = %d s3.s.c = %s s3.s.d = %f s3.ccc = %s\n",
	 s3.cc, s3.s.i, s3.s.c, s3.s.d, s3.ccc);
  double d = va_arg(ap, double);
  printf("d = %f\n", d);
  int i = va_arg(ap, int);
  printf("i = %d\n", i);
  unsigned long long int ulli = va_arg(ap, unsigned long long int);
  printf("ulli = %llu\n", ulli);
  va_end(ap);
}

/* Especially test x := va_start y, x := va_arg y, T */
void test004(void)
{
  printf("`test004' called\n");
  struct S2 s = { 103, "va_start & va_arg test", -104.0 };
  struct S3 t = { "zZ", { 13, "va_end may be just ignored", 0.125 }, "xXyY" };
  test004_subr(s, t, 1.0, 2, 3ULL);
}

/* Especiall test x[y] := z and y isn't constant */
void test005(struct S3 a)
{
  printf("`test005' called\n");
  struct S3 array[10];
  for ( int i = 0 ; i != sizeof array/sizeof array[0] ; ++i ){
    array[i] = a;
  }

  for ( int i = 0 ; i != sizeof array/sizeof array[0] ; ++i ){
    struct S3* p = &array[i];
    printf("cc = %s s.i = %d s.c = %s s.d = %f ccc = %s\n",
	   p->cc, p->s.i, p->s.c, p->s.d, p->ccc);
  }
}

/* Especiall test x := y[z] and z isn't constant */
void test006(int n)
{
  printf("`test006' called\n");
  struct S3 array[10];
  for ( int i = 0 ; i != sizeof array/sizeof array[0] ; ++i ){
    array[i] = (struct S3){ "ab", { i, "ABCDEF", -i }, "cdef" };
  }

  struct S3 x = array[n];
    printf("cc = %s s.i = %d s.c = %s s.d = %f ccc = %s\n",
	   x.cc, x.s.i, x.s.c, x.s.d, x.ccc);

}

int main(void)
{
  struct S1 x = { 's' }, y = { 't' };
  test000(x, y);
  
  struct S2 s = { 1, "apple", 3.0 };
  struct S2 t = { 3, "lemmon", 5.0 };
  test001(s, t);
  
  struct S3 r = { "ef", { 2, "grape", 4.0 }, "abc" };
  test002(s,r,t);  // intentionally ignore return structure

  test003();

  test004();

  test005(r);

  test006(5);
  
  return 0;
}
