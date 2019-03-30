/*
 * The expression that defines the value of an enumeration constant shall
 * be an integer constant expression that has a value representable as an
 * int.
 */

int x;
double y;
int z(void);

enum E1 { a = x, b = y, c = z() };

int w[10];

enum E2 { d = 1.0F, e = (int)&"string literal", f = (int)&w[0] };

