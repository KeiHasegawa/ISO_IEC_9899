/*
 * Check error of the combination with `int'
 */
int void test000(void);
int char test001(void);
int int test002(void);
int float test003(void);
int double test004(void);
void int test005(void);
char int test006(void);
float int test007(void);
double int test008(void);
struct S { int a; };
int struct S test009(void);
struct S int test010(void);
union U { int a; };
int union U test011(void);
union U int test012(void);
typedef void T;
T int test013(void);
int T test014(void);
