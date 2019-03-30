/*
 * One of the following shall hold:
 * - both operands have arithmetic type;
 * - both operands are pointers to qualified or unqualified versions of
 * compatible types;
 * - one operand is a pointer to an object or incomplete type and the other
 * is a pointer to a qualified or unqualified version of void; or
 * - one operand is a pointer and the other is a null pointer constant.
 */
void f(int a, char* b)
{
  a == b;
  a != b;
  a == (int*)0;
  a != (int*)1;
  b == (int*)0;
  b != (int*)1;
  1 == b;
  2 != b;
  0.0 == b;
  1 == (void*)0;
  2 != (int*)1;
  3 == (double*)2;
  4 != (long int*)3;
}
