/*
 * The expression that specifies the width of a bit-field shall be an integer
 * constant expression that has nonnegative value that shall not exceed the
 * number of bits in an object of the type that is specified if the colon and
 * expression are omitted. If the value is zero, the declaration shall have no
 * declarator.
 */
struct S1 {
  unsigned int a : 10.5;  /* error */
};

int n;
double d;

struct S2 {
  unsigned int b : n;  /* error */
  unsigned int c : d;  /* error */
};

struct S3 {
  unsigned int d : -5;  /* error */
};

struct S4 {
  unsigned int e : 33;  /* error */
};

struct S5 {
  unsigned int f : 0;  /* error */
};
