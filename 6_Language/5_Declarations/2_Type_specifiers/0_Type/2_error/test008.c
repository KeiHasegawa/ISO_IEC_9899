/*
 * Check error of the combination with `float'
 */
float void test000(void);
void float test001(void);
float char test002(void);
char float test003(void);
float short test004(void);
short float test005(void);
float int test006(void);
int float test007(void);
float long test008(void);
long float test009(void);
signed float test010(void);
float signed test011();
float float test012();
float double test013();
double float test014();
struct S { int a; };
float struct S test015(void);
struct S float test016(void);
union U { int a; };
float union U test017(void);
union U float test018(void);
typedef void T;
T float test019(void);
float T test020(void);
