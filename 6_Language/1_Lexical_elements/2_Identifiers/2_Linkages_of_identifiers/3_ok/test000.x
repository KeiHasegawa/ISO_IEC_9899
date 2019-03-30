/*
 * Check if identifiers with external linkage are recognized.
 */
#include <stdio.h>
int a;  /* external linkage because
           o no prior declaration is visible
           o file scope
         */

extern int a;  /* external linkage. because
                  o specified `extern'
                  o prior declaration is visible
                  o prior declaration specifies internal or external linkage
                    (in this case, external linkage)
	         */

static int b;  /* internal linkage */

extern int b;  /* external linkage. because
                  o specified `extern'
                  o prior declaration is visible
                  o prior declaration specifies internal or external linkage
                    (in this case, internal linkage)
	        */

int main(void)
{
  extern int a; /* external linkage */
  extern int b; /* external linkage */
  printf("a = %d\n", a = 1234);
  printf("b = %d\n", b = 5678);
  return 0;
}
