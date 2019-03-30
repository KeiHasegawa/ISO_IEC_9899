/*
 * Unless the type name specifies a void type, the type name shall specify
 * qualified or unqualified scalar type and the operand shall have scalar type.
 */

/* array */
void test00(int x)
{
  (int [])x;
  (int [3])x;
}

/* function */
void test01(int x)
{
  (int (void))x;
}

/* struct */
void test02(int x)
{
  struct S { int a; };
  (struct S)x;
  struct SS;
  (struct SS)x;
}

/* union */
void test03(int x)
{
  union U { int a; };
  (union U)x;
  union UU;
  (union UU)x;
}

/* incomplete enum */
void test04(int x)
{
  enum E;
  (enum E)x;
}
