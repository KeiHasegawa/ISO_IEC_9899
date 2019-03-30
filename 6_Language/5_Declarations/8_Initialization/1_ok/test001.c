/*
 * Check if generated pointer is initializer constant.
 */
#include <stdio.h>

#ifdef _MSC_VER
int (*p)(const char* const, ...) = printf;
#else // _MSC_VER
int (*p)(const char* , ...) = printf;
#endif // _MSC_VER

int main(void)
{
  (*p)("hello world\n");
  return 0;
}
