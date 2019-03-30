/*
 * Check if undeclared variable is detected.
 */

void f()
{
  x[3];  // undeclared

  if (1) {
    int a;
  }
}
