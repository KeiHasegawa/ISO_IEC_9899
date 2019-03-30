/*
 * Check if pasting "/" and "/" does not give a valid preprocessing token
 */
#include <stdio.h>

void k(void){ printf("`k' called\n"); }

int main(void)
{
#define glue(x,y) x##y
  glue(/,/) k();
  /* not converted to */
  // k();
  return 0;
}

