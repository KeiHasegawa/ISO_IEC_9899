/*
 * All declarations of variably modified (VM) types must be declared at either
 * block scope or function prototype scope. Array objects declared with the
 * static or extern storage class specifier cannot have a variable length array
 * (VLA) type. However, an object declared with the static storage class
 * specifier can have a VM type (that is, a pointer to a VLA type). Finally,
 * all identifiers declared with a VM type must be ordinary identifiers, and
 * can not, therefore, be members of structures or unions.
 */
void test000(int n)
{
  static int a[n];  /* error */
  extern int b[n];  /* error */
}

int n;
int (*pa)[n];  /* error. file scope VM */
