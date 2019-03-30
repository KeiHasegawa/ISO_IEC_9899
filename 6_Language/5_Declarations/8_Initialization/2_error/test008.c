/*
 * Check if undeclared member specified with member designator
 * is error.
 */
struct S {
  int a;
};

struct S s = { .b = 1 };
