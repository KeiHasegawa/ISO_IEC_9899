/*
 * Check the case of member declarator is ommited.
 *
 * The expression that specifies the width of a bit-field shall be an integer
 * constant expression that has nonnegative value that shall not exceed the
 * number of bits in an object of the type that is specified if the colon and
 * expression are omitted. If the value is zero, the declaration shall have no
 * declarator.
 *
 * ... If the struct-declaration-list contains no named members, the behavior
 * is undefined.
 */
#include <stdio.h>

struct S1 {
  int;
};

struct S2 {
  int : 0;
};

int main(void)
{
  printf("sizeof(struct S1) = %d\n", (int)sizeof(struct S1));
  printf("sizeof(struct S2) = %d\n", (int)sizeof(struct S2));
  return 0;
}
