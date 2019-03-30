/*
 * Inline function call `f_n' in inline function `h' follows the inline
 * function definition.
 * Inline function definitions `g_n' follows the inline function calls
 * in inline function `h'.
 */
#include <stdio.h>

inline int h(int, int);

int main(void)
{
  for ( int i = 1 ; i < 100 ; ++i ){
    for ( int j = 1 ; j < 100 ; ++j ){
      if ( h(i,j) != ((i+j)&(i*j)|(i-j)^(i/j)) ){
	printf("error in i = %d, j = %d\n", i, j);
	return 0;
      }
    }
  }
  printf("ok\n");
  return 0;
}

inline int f0(int a, int b)
{
  return a + b;
}

inline int f1(int a, int b)
{
  return a - b;
}

inline int g0(int, int);

inline int g1(int, int);

inline int h(int a, int b)
{
  return f0(a,b) & g0(a,b) | f1(a,b) ^ g1(a,b);
}

inline int g0(int a, int b)
{
  return a * b;
}

inline int g1(int a, int b)
{
  return a / b;
}
