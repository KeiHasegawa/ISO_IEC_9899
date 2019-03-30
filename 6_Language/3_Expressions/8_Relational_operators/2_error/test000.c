/*
 * One of the following shall hold:
 * - both operands have real type;
 * - both operands are pointers to qualified or unqualified versions of
 * compatible object types; or
 * - both operands are pointers to qualified or unqualified versions of
 * compatible incomplete types.
 */
void f(int a, char* b)
{
  a < b;
  a > b;
  a <= b;
  a >= b;
  a < (void*)0;
  a > (void*)1;
  a <= (void*)2;
  a >= (void*)3;
  b < (void*)0;
  b > (void*)1;
  b <= (void*)2;
  b >= (void*)3;
  0 < b;
  1 > b;
  2 <= b;
  3 >= b;
  0 < (void*)0;
  1 > (int*)1;
  2 <= (double*)2;
  3 >= (long int*)3;
}
