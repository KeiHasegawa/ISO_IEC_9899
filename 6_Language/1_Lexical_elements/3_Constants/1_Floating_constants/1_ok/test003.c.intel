/*
 * Check if floating-constats are recognized,
 * whose types are `long double' and which are in various range.
 *
 * Note : We assumed that compiler uses
 * Intel 80 bits floating constant format
 * for `long double'.
 *
 * For precice, reference
 * IA-32 Intel Architecture Software Developer's Mannual
 * Volumue 1, Basic Architecture
 * Figure 8-13. x87 FPU Data Type Formats.
 *
 * Let type of `x' be `long double' and bit representation of `x'
 * (b_0 ... b_{79}).
 *
 * If `x' is normalized, b_{16} = 1 and
 *
 * x = (-1)^{b_0} 2^{e-16383}(1+\sum_{i=17}^{79}b_i/2^{i-16})
 * where, e = \sum_{i=1}^{15} 2^{15-i} b_i and e must be neither
 * 0 nor 2^{15} - 1
 *
 * If `x' is denormalized, b_{16} = 0 and
 *
 * x = (-1)^{b_0} 2^{-16383} \sum_{i=17}^{79}(b_i/2^{i-16})
 */

#include <stdio.h>

/*
 * Check if b_0 is recognized.
 */
void test00(void)
{
  printf("*** `test00' called\n");
  union {
    long double ld;
    struct {
      int w[2];
      unsigned short int h;
    } s;
  } u;

  /* zero */
  u.ld = +0.0L;
  printf("+0.0L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = -u.ld;
  printf("-0.0L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);

  /* normalized */
  u.ld = +1.0L;
  printf("+1.0L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = -1.0L;
  printf("-1.0L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);

  /* not normalized */
  u.ld = +0x1p-16383L;
  printf("+0x1p-16383L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = -0x1p-16383L;
  printf("-0x1p-16383L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);

  /* inf */
  u.ld = +1.0L/0.0L;
  printf("+inf : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = -1.0L/0.0L;
  printf("-inf : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
}

/*
 * Check if b_1 ... b_{15} is recognized.
 */
void test01(void)
{
  printf("*** `test01' called\n");
  union {
    long double ld;
    struct {
      int w[2];
      unsigned short int h;
    } s;
  } u;

  u.ld = 0x1p-16382L;
  printf("0x1p-16382L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16381L;
  printf("0x1p-16381L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16379L;
  printf("0x1p-16379L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16375L;
  printf("0x1p-16375L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16367L;
  printf("0x1p-16367L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16351L;
  printf("0x1p-16351L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16319L;
  printf("0x1p-16319L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16255L;
  printf("0x1p-16255L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16127L;
  printf("0x1p-16127L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-15871L;
  printf("0x1p-15871L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-15359L;
  printf("0x1p-15359L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-14335L;
  printf("0x1p-14335L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-12287L;
  printf("0x1p-12287L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-8191L;
  printf("0x1p-8191L  : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p+1L;
  printf("0x1p+1L     : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
}

/*
 * Check if b_{17} ... b_{79} is recognized.
 */
void test02(void)
{
  printf("*** `test02' called\n");

  union {
    long double ld;
    struct {
      int w[2];
      unsigned short int h;
    } s;
  } u;
  u.ld = 0x1p-16445L;
  printf("0x1p-16445L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16444L;
  printf("0x1p-16444L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16443L;
  printf("0x1p-16443L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16442L;
  printf("0x1p-16442L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16441L;
  printf("0x1p-16441L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16440L;
  printf("0x1p-16440L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16439L;
  printf("0x1p-16439L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16438L;
  printf("0x1p-16438L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16437L;
  printf("0x1p-16437L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16436L;
  printf("0x1p-16436L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16435L;
  printf("0x1p-16435L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16434L;
  printf("0x1p-16434L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16433L;
  printf("0x1p-16433L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16432L;
  printf("0x1p-16432L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16431L;
  printf("0x1p-16431L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16430L;
  printf("0x1p-16430L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16429L;
  printf("0x1p-16429L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16428L;
  printf("0x1p-16428L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16427L;
  printf("0x1p-16427L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16426L;
  printf("0x1p-16426L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16425L;
  printf("0x1p-16425L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16424L;
  printf("0x1p-16424L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16423L;
  printf("0x1p-16423L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16422L;
  printf("0x1p-16422L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16421L;
  printf("0x1p-16421L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16420L;
  printf("0x1p-16420L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16419L;
  printf("0x1p-16419L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16418L;
  printf("0x1p-16418L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16417L;
  printf("0x1p-16417L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16416L;
  printf("0x1p-16416L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16415L;
  printf("0x1p-16415L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16414L;
  printf("0x1p-16414L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16413L;
  printf("0x1p-16413L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16412L;
  printf("0x1p-16412L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16411L;
  printf("0x1p-16411L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16410L;
  printf("0x1p-16410L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16409L;
  printf("0x1p-16409L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16408L;
  printf("0x1p-16408L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16407L;
  printf("0x1p-16407L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16406L;
  printf("0x1p-16406L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16405L;
  printf("0x1p-16405L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16404L;
  printf("0x1p-16404L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16403L;
  printf("0x1p-16403L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16402L;
  printf("0x1p-16402L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16401L;
  printf("0x1p-16401L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16400L;
  printf("0x1p-16400L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16399L;
  printf("0x1p-16399L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16398L;
  printf("0x1p-16398L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16397L;
  printf("0x1p-16397L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16396L;
  printf("0x1p-16396L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16395L;
  printf("0x1p-16395L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16394L;
  printf("0x1p-16394L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16393L;
  printf("0x1p-16393L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16392L;
  printf("0x1p-16392L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16391L;
  printf("0x1p-16391L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16390L;
  printf("0x1p-16390L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16389L;
  printf("0x1p-16389L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16388L;
  printf("0x1p-16388L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16387L;
  printf("0x1p-16387L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16386L;
  printf("0x1p-16386L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16385L;
  printf("0x1p-16385L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16384L;
  printf("0x1p-16384L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
  u.ld = 0x1p-16383L;
  printf("0x1p-16383L : 0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
}

int main(void)
{
  test00();
  test01();
  test02();
  return 0;
}
