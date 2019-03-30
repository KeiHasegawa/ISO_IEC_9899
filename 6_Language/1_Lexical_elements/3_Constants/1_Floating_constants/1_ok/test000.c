/*
 * Check if floating point literal constant is recognized.
 */
#include <stdio.h>

/*
 * floating-constant:
 *   decimal-floating-constant
 *   hexadecimal-floating-constant
 */
void test00(void)
{
  printf("*** `test00' called ***\n");
  printf("%f\n", 0.5);      /* decimal-floating-constant */
  printf("%f\n", 0x12p3);   /* hexadecimal-floating-constant */
}

/*
 * decimal-floating-constant:
 *  fractional-constant exponent-partopt floating-suffixopt
 *  digit-sequence exponent-part floating-suffixopt
 */
void test01(void)
{
  printf("*** `test01' called ***\n");

  /* fractional-constant                               */
  printf("%f\n", 0.25);
  /* fractional-constant               floating-suffix */
  printf("%Lf\n", 0.25L);
  /* fractional-constant exponent-part                 */
  printf("%f\n", 0.25E+2);
  /* fractional-constant exponent-part floating-suffix */
  printf("%Lf\n", 0.25E-2L);

  /* digit-sequence exponent-part                    */
  printf("%f\n", 2E-3);
  /* digit-sequence exponent-part floating-suffixopt */
  printf("%Lf\n", 2E+3L);
}

/*
 * hexadecimal-floating-constant:
 *   0x hexadecimal-fractional-constant
 *     binary-exponent-part floating-suffixopt
 *   0X hexadecimal-fractional-constant
 *     binary-exponent-part floating-suffixopt
 *   0x hexadecimal-digit-sequence
 *     binary-exponent-part floating-suffixopt
 *   0X hexadecimal-digit-sequence
 *     binary-exponent-part floating-suffixopt
 */
void test02(void)
{
  printf("*** `test02' called ***\n");

  /* 0x hexadecimal-fractional-constant binary-exponent-part */
  printf("%f\n", 0xab.cp3);

  /* 0x hexadecimal-fractional-constant binary-exponent-part floating-suffix */
  printf("%Lf\n", 0xab.cp3L);

  /* 0X hexadecimal-fractional-constant binary-exponent-part */
  printf("%f\n", 0Xab.cp3);

  /* 0X hexadecimal-fractional-constant binary-exponent-part floating-suffix */
  printf("%Lf\n", 0Xab.cp3L);


  /* 0x hexadecimal-digit-sequence binary-exponent-part                 */
  printf("%f\n", 0x12p3);

  /* 0x hexadecimal-digit-sequence binary-exponent-part floating-suffix */
  printf("%Lf\n", 0x12p3L);

  /* 0X hexadecimal-digit-sequence binary-exponent-part                 */
  printf("%f\n", 0X12p3);

  /* 0X hexadecimal-digit-sequence binary-exponent-part floating-suffix */
  printf("%Lf\n", 0X12p3L);
}

/*
 * fractional-constant:
 *   digit-sequenceopt . digit-sequence
 *   digit-sequence .
 */
void test03(void)
{
  printf("*** `test03' called ***\n");

  /* digit-sequence . digit-sequence */
  printf("%f\n",12.25);
  /*                . digit-sequence */
  printf("%f\n",.25);
  /* digit-sequence . */
  printf("%f\n",12.);
}

/*
 * exponent-part:
 *   e signopt digit-sequence
 *   E signopt digit-sequence
 */
void test04(void)
{
  printf("*** `test04' called ***\n");

  /* e      digit-sequence */
  printf("%f\n", 2e1);
  /* e sign digit-sequence */
  printf("%f\n", 2e+1);
  /* E      digit-sequence */
  printf("%f\n", 2E1);
  /* E sign digit-sequence */
  printf("%f\n", 2E-1);
}

/*
 * sign: one of
 *   + -
 */
void test05(void)
{
  printf("*** `test05' called ***\n");

  printf("%f\n", 2E+1);  /* + */
  printf("%f\n", 2E-1);  /* - */
}

/*
 * digit-sequence:
 *   digit
 *   digit-sequence digit
 */
void test06(void)
{
  printf("*** `test06' called ***\n");

  printf("%f\n", 1e+1);  /* digit */
  printf("%f\n", 12e+1); /* digit-sequence digit */
}

/*
 * hexadecimal-fractional-constant:
 *   hexadecimal-digit-sequenceopt .
 *     hexadecimal-digit-sequence
 *   hexadecimal-digit-sequence .
 */
void test07(void)
{
  printf("*** `test07' called ***\n");

  /*                            . hexadecimal-digit-sequence */
  printf("%f\n", 0x.1fp2);
  /* hexadecimal-digit-sequence . hexadecimal-digit-sequence */
  printf("%f\n", 0x1f.2ep2);
  /* hexadecimal-digit-sequence . */
  printf("%f\n", 0x1f.p2);
}

/*
 * binary-exponent-part:
 *   p signopt digit-sequence
 *   P signopt digit-sequence
 */
void test08(void)
{
  printf("*** `test08' called ***\n");

  /* p      digit-sequence */
  printf("%f\n", 0x12p1);
  /* p sign digit-sequence */
  printf("%f\n", 0x12p+1);
  /* P      digit-sequence */
  printf("%f\n", 0x12P1);
  /* P sign digit-sequence */
  printf("%f\n", 0x12P-1);
}

/*
 * hexadecimal-digit-sequence:
 *   hexadecimal-digit
 *   hexadecimal-digit-sequence hexadecimal-digit
 */
void test09(void)
{
  printf("*** `test09' called ***\n");

  /* hexadecimal-digit */
  printf("%f\n", 0x3p3);
  /* hexadecimal-digit-sequence hexadecimal-digit */
  printf("%f\n", 0x34p2);
}

/*
 * hexadecimal-digit: one of
 *   0 1 2 3 4 5 6 7 8 9
 *   a b c d e f
 *   A B C D E F
 */
void test10(void)
{
  printf("*** `test10' called ***\n");

  printf("%f\n", 0x0p1);
  printf("%f\n", 0x1p1);
  printf("%f\n", 0x2p1);
  printf("%f\n", 0x3p1);
  printf("%f\n", 0x4p1);
  printf("%f\n", 0x5p1);
  printf("%f\n", 0x6p1);
  printf("%f\n", 0x7p1);
  printf("%f\n", 0x8p1);
  printf("%f\n", 0x9p1);
  printf("%f\n", 0xap1);
  printf("%f\n", 0xbp1);
  printf("%f\n", 0xcp1);
  printf("%f\n", 0xdp1);
  printf("%f\n", 0xep1);
  printf("%f\n", 0xfp1);
  printf("%f\n", 0xAp1);
  printf("%f\n", 0xBp1);
  printf("%f\n", 0xCp1);
  printf("%f\n", 0xDp1);
  printf("%f\n", 0xEp1);
  printf("%f\n", 0xFp1);
}

/*
 * floating-suffix: one of
 *   f l F L
 */
void test11(void)
{
  printf("*** `test11' called ***\n");

  printf("%f\n", (double)0.5f);
  printf("%Lf\n", 0.25l);
  printf("%f\n", (double)0.125F);
  printf("%Lf\n", 0.0625L);
}

int main(void)
{
  test00();
  test01();
  test02();
  test03();
  test04();
  test05();
  test06();
  test07();
  test08();
  test09();
  test10();
  test11();
  return 0;
}
