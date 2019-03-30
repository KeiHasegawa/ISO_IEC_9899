/*
 * Check error of the combination with `long'
 */
long void test000(void);
void long test001(void);
long char test002(void);
char long test003(void);
long short test004(void);
short long test005(void);
long float test006(void);
float long test007(void);
long long double test008(void);
long double long test009(void);
double long long test010(void);
long long long test011(void);
struct S { int a; };
long struct S test012(void);
struct S int test013(void);
union U { int a; };
long union U test014(void);
union U long test015(void);
typedef void T;
T long test016(void);
long T test017(void);
