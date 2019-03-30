/*
 * For two function types to be compatible, both shall specify compatible
 * return types. Moreover, the parameter type lists, if both are present, shall
 * agree in the number of parameters and in use of the ellipsis terminator;
 * corresponding parameters shall have compatible types. If one type has a
 * parameter type list and the other type is specified by a function declarator
 * that is not part of a function definition and that contains an empty
 * identifier list, the parameter list shall not have an ellipsis terminator
 * and the type of each parameter shall be compatible with the type that
 * results from the application of the default argument promotions. If one type
 * has a parameter type list and the other type is specified by a function
 * definition that contains a (possibly empty) identifier list, both shall
 * agree in the number of parameters, and the type of each prototype parameter
 * shall be compatible with the type that results from the application of the
 * default argument promotions to the type of the corresponding identifier.
 * (In the determination of type compatibility and of a composite type, each
 * parameter declared with function or array type is taken as having the type
 * that results from conversion to a pointer type, as in 6.7.1, and each
 * parameter declared with qualified type is taken as having the unqualified
 * version of its declared type.)
 */
#include <stdio.h>

double maximum(int n, int m, double a[n][m]);
double maximum(int n, int m, double a[*][*]);
double maximum(int n, int m, double a[ ][*]);
double maximum(int n, int m, double a[ ][m]);

void test000(void)
{
  double a[][3] = {
    { 0, 1, 2 },
    { 3, 4, 5 },
    { 6, 7, 8 },
    { 9, 10, 11 },
  };
  printf("maximum return %f\n", maximum(4,3,&a[0]));
}

int main(void)
{
  test000();
  return 0;
}

double maximum(int n, int m, double a[n][m])
{
  printf("`maximum' called\n");
  for ( int i = 0 ; i < n ; ++i ){
    for ( int j = 0 ; j < m ; ++j )
      printf(" %f", a[i][j]);
    printf("\n");
  }
  return a[n-1][m-1];
}

