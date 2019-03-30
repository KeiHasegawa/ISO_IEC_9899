typedef int A[10];

typedef int* P;

struct S {
  A a : 10;  /* Error */
  P : 3; /* Error */
};
