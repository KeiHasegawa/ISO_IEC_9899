/*
 * Check if usual arithmetic conversion is well done.
 *
 * ANSI semantics:
 *   `unsigned char' will be promoted to `int'
 *   so, -1 and (unsigned char) 1 will be compared with
 *   signed int
 *
 * K&R semantics
 *   `unsigned char' will be promoted to `unsigned int'
 *   so, -1 and (unsigned char) 1 will be compared with
 *   unsigned int
 */
#include <stdio.h>

int main(void)
{
  if ( -1 < (unsigned char) 1 )
    printf("-1 is less than (unsigned char) 1: ANSI semantics\n");
  else
    printf("-1 NOT less than (unsigned char) 1: K&R semantics\n");
  return 0;
}
