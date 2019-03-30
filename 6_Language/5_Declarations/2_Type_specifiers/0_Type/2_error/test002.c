/*
 * Check error of the combination with `char'
 */
char void test000(void);
char char test001(void);
char int test002(void);
char short test003(void);
char long test004(void);
char float test005(void);
char double test006(void);
void char test007(void);
char char test008(void);
int char test009(void);
short char test010(void);
long char test011(void);
float char test012(void);
double char test013(void);
struct S { int a; };
char struct S test014(void);
struct S char test015(void);
union U { int a; };
char union U test016(void);
union U char test017(void);
typedef int T;
T char test018(void);
char T test019(void);
