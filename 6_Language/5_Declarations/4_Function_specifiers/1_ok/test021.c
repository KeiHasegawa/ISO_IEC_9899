/*
 * Check if inline function calls and static function calls work well.
 * Here, these inline functions and static functions are defined after
 * calling them.
 *
 * o Caller function may be inline, static or none.
 * o These inline functions and static functions may be called at several
 *   times at enough randomly.
 */
#include <stdio.h>
#ifdef __func__
#undef __func__
#endif

inline void printfd(float, double);
inline int add_or_mul(int x, int a, int b);
inline double sub_or_div(int x, double a, int b);
inline float sum(double *a, int n);

static double f(void);
static void printd(double);
static int rsh_or_lsh(int, int, int);
static int and_or_xor(int, int, int);

float apple(int n, double d)
{
  printfd(n, d);
  int x = add_or_mul(0, n, d);
  int y = add_or_mul(1, n, d);
  printfd(x, y);
  int u = sub_or_div(0, n*2, d);
  int v = sub_or_div(1, n*2, d);
  printfd(u, v);
  double ad[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
  float s = sum(&ad[0], sizeof ad/sizeof ad[0]);
  float t = sum(&ad[0], sizeof ad/(2 * sizeof ad[0]));
  printfd(s, t);
  double db = f();
  printd(db);
  int aa = rsh_or_lsh(0, n*8, d);
  int bb = rsh_or_lsh(1, n*8, d);
  printd(aa);
  printd(bb);
  int i = and_or_xor(0, n, d);
  int j = and_or_xor(1, n, d);
  printd(i);
  printd(j);
  return add_or_mul(x,y,u)+sub_or_div(v,s,t)+rsh_or_lsh(db,aa,bb)+and_or_xor(db,i,j);
}

static void grape(int a, int b, int c)
{
  printfd(a, b);
  printd(c);
  int u = sub_or_div(0, b, c);
  int v = sub_or_div(1, b, c);
  printfd(u, v);
  double ad[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
  float s = sum(&ad[0], sizeof ad/sizeof ad[0]);
  float t = sum(&ad[0], sizeof ad/(2 * sizeof ad[0]));
  printfd(s, t);
  double db = f();
  printd(db);
  int aa = rsh_or_lsh(0, c, a);
  int bb = rsh_or_lsh(1, c, a);
  printd(aa);
  printd(bb);
  int i = and_or_xor(0, a, b);
  int j = and_or_xor(1, a, b);
  printd(i);
  printd(j);
  int x = add_or_mul(0, a, b);
  int y = add_or_mul(1, a, b);
  printfd(x, y);
}

inline int lemmon(double a, double b)
{
  printfd(a, b);
  double ad[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
  float s = sum(&ad[0], sizeof ad/sizeof ad[0]);
  float t = sum(&ad[0], sizeof ad/(2 * sizeof ad[0]));
  printfd(s, t);
  double db = f();
  printd(db);
  int aa = rsh_or_lsh(0, b, a);
  int bb = rsh_or_lsh(1, b, a);
  printd(aa);
  printd(bb);
  int i = and_or_xor(0, a, b);
  int j = and_or_xor(1, a, b);
  printd(i);
  printd(j);
  int x = add_or_mul(0, a, b);
  int y = add_or_mul(1, a, b);
  printfd(x, y);
  int u = sub_or_div(0, a, b);
  int v = sub_or_div(1, a, b);
  printfd(u, v);
  return add_or_mul(x,y,u)+sub_or_div(v,s,t)+rsh_or_lsh(db,aa,bb)+and_or_xor(db,i,j);
}

inline void printfd(float a, double b)
{
  printf("%s a = %f b = %f\n", __func__, a, b);
}

inline int add_or_mul(int x, int a, int b)
{
  return x ? a + b : a * b;
}

inline double sub_or_div(int x, double a, int b)
{
  return x ? a - b : a / b;
}

inline float sum(double* a, int n)
{
  double s = 0;
  for ( double* p = &a[0] ; p != &a[n] ; ++p )
    s += *p;
  return s;
}

double array[] = { 1, 2, 3, 4, 5, 6, 7 };

static double f(void)
{
  double r = 1;
  int N = sizeof array/sizeof array[0];
  for ( double* p = &array[0] ; p != &array[N] ; ++p)
    r *= *p;
  return r;
}

static void printd(double d)
{
  printf("%s d = %f\n", __func__, d);
}

static int rsh_or_lsh(int x, int a, int b)
{
  return x ? a >> b : a << b;
}

static int and_or_xor(int x, int a, int b)
{
  return x ? a & b : a ^ b;
}

int main()
{
  printf("apple(3, 4) returns %f\n", apple(3, 4));
  grape(10, 20, 30);
  printf("lemmon(7, 8) return s %d\n", lemmon(7, 8));
  return 0;
}
