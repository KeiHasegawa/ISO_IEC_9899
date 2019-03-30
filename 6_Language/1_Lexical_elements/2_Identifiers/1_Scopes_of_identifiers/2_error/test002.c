/*
 * Check block scope declarations are recognized.
 */
int f(int a)  /* this `a' has block scope associated with block of f's body */ 
{
  int a;  /* error, because this `a' also has block scope associated with */
	  /* block of f's body. redeclaration. */ 
}
