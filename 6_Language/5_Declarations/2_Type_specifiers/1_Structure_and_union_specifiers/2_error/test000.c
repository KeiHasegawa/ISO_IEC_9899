/*
 * A structure or union shall not contain a member with incomplete or function
 * type, except that the last element of a structure may have incomplete array
 * type. Hence it shall not contain an instance of itself (but may contain a
 * pointer to an instance of itself).
 */
struct T;

struct S1 {
  struct T t;  /* error */
};

union U1 {
  struct T t;  /* error */
};

struct S2 {
  void f(void);  /* error */
};

union U2 {
  void f(void);  /* error */
};

struct S3 {
  int a[];  /* error. not flexible array element. */
  int b;
};

union U3 {
  int a[];  /* error. not flexible array element. */
};

struct S4 {
  struct S4 a;  /* error */
};

union U4 {
  union U4 a;  /* error */
};

int n;

struct S5 {
  int a[n];  /* error */
};

union U5 {
  int a[n];  /* error */
};
