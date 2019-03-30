/*
 * Check if comments are recognized.
 */
int main(void)
{
#include "//e" // undefined behavior
  return 0;
}
