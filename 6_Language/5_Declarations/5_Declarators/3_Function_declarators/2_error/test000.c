/*
 * A function declarator shall not specify a return type that is a function
 * type or an array type.
 */
int test000(void)(int);

int test001(void)[3];

typedef int F(double);
typedef float A[5];

F test002(void);
A test003(void);

