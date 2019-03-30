/*
 * Check ISO sample works well.
 */

extern int n;
int A[n]; // Error - file scope VLA.
extern int (*p2)[n]; // Error - file scope VM.
int B[100]; // OK - file scope but not VM.
void fvla(int m, int C[m][m]) // OK - VLA with prototype scope.
{
  typedef int VLA[m][m]; // OK - block scope typedef VLA.
  struct tag {
    int (*y)[n]; // Error - y not ordinary identifier.
    int z[n]; // Error - z not ordinary identifier.
  };
  int D[m]; // OK - auto VLA.
  static int E[m]; // Error - static block scope VLA.
  extern int F[m]; // Error - F has linkage and is VLA.
  int (*s)[m]; // OK - auto pointer to VLA.
  extern int (*r)[m]; // Error - r had linkage and is
                      // a pointer to VLA.
  static int (*q)[m] = &B; // OK - q is a static block
                           // pointer to VLA.
}
