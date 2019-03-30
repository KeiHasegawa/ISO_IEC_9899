/*
 * Check if ISO sample works well.
 *
 * type t1 and the type pointed to by tp1 are compatible. Type t1 is also
 * compatible with type struct s1, but not compatible with the types struct
 * s2, t2, the type pointed to by tp2, and int.
 */
typedef struct s1 { int x; } t1, *tp1;
typedef struct s2 { int x; } t2, *tp2;

void f(void)
{
  t2 a;
  struct s2 b;
  int c;
  tp1 p;
  p = &a;  /* error */
  p = &b;  /* error */
  p = &c;  /* error */
}
