/*
 * Check if same scope declarations are recognized.
 */
int a;  /* tentative definition. */
int a;  /* ok. not redeclaration. tentative definition. */

typedef int X;
X X;  /* error. redeclaration. */

struct S { int a; };
struct S { int a; };  /* error. redeclaration. */

void f(int a, int a);  /* second `a' is error. redeclaration. */

void g(int a)
{
  int a;  /* error. redeclaration. */
  {
    int a;
    int a;  /* error. redeclaration. */
  }
}
