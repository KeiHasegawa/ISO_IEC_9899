/*
 * Check if ISO error sample is treated as error.
 */
void f(int n, int j)
{
  goto lab3; // Error: going INTO scope of VLA.
  {
    double a[n];
    a[j] = 4.4;
  lab3:
    a[j] = 3.3;
    a[j] = 5.5;
  lab4:
    a[j] = 6.6;
  }
  goto lab4; // Error: going INTO scope of VLA.
}
