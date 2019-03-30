/*
 * Check ISO smaple works well.
 */

extern int n;
extern int m;
void fcompat(void)
{
  int a[n][6][m];
  int (*p)[4][n+1];
  int c[n][n][6][m];
  int (*r)[n][n][n+1];
  p = a; // Error - not compatible because 4 != 6.
  r = c; // Compatible, but defined behavior
         // only if n == 6 and m == n+1.
}
