/*
 * Check if it's possible to refer to enum member at inline or static function.
 */

#include <stdio.h>

inline int epsilon(void)
{
  enum fruit { apple, grape, orange };
  return orange;
}

static double zeta(double d)
{
  enum company { apple, microsoft, oracle };
  return oracle * d;
}

inline float eta(int);

static char* theta(int);

int main()
{
  printf("epsilon() = %d\n", epsilon());
  printf("zeta(2.5) = %f\n" , zeta(2.5));
  printf("eta(4) = %f\n", eta(4));
  printf("theta(7) = %s\n", theta(7));
  return 0;
}

inline float eta(int n)
{
  enum { C, CXX, Pascal, Fortran, Forth };
  return Fortran * n;
}

char array[] = "abcdefghijklmnopqrstuvwxyz";

static char* theta(int n)
{
  enum Interpreter { Perl, Ruby, Shell };
  return &array[n-Shell];
}
