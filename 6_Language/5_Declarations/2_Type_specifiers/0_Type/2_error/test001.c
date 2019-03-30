/*
 * Check error of the combination with `void'
 */
void void test000(void);
void char test001(void);
void int test002(void);
void short test003(void);
void long test004(void);
void signed test005(void);
void unsigned test006(void);
void float test007(void);
void double test008(void);
char void test009(void);
int void test010(void);
short void test011(void);
long void test012(void);
signed void test013(void);
unsigned void test014(void);
float void test015(void);
double void test016(void);
struct S { int a; };
void struct S test017(void);
struct S void test018(void);
union U { int a; };
void union U test019(void);
union U void test020(void);
typedef int T;
T void test021(void);
void T test022(void);
