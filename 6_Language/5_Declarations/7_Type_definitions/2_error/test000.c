/*
 * If a typedef name specifies a variably modified type then it shall have
 * block scope.
 */
int n;
typedef int a[n];  /* file scope */

void f(typedef int b[n])
{
}

