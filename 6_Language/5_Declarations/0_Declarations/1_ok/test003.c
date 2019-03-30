/*
 * If an identifier for an object is declared with no linkage, the type
 * for the object shall be complete by the end of its declarator, or by the
 * end of its init-declarator if it has an initializer.
 */
#include <stdio.h>

struct S;
extern struct S s;  /* Ok. type of `s' is not complete.
		       But `s' has external linkage.
		     */

struct S {
  int a;
};

struct S s; /* Ok. `s' has external linkage. Because previous `s'
	       has external linkage.
	     */

extern struct S a[]; /* Ok, type of `a' is not complete.
			But `a' has external linkage.
		      */

int main(void)
{
  s.a = 5;
  for ( int i = 0 ; i < s.a ; ++i )
    printf(" %d", a[i].a);
  printf("\n");
  return 0;
}

struct S a[] = {  /* Ok. `a' has external linkage. Because previous `a'
		     has external linkage.
		   */
  { 0 }, { 1 }, { 2 }, { 3 }, { 4 }
};
