/*
 * Check error of the combination with `short'
 */
short void test000(void);
short char test001(void);
short short test002(void);
short long test003(void);
short float test004(void);
short double test005(void);
void short test006(void);
char short test007(void);
long short test008(void);
float short test009(void);
double short test010(void);
struct S { int a; };
short struct S test011(void);
struct S short test012(void);
union U { int a; };
short union U test013(void);
union U short test014(void);
typedef void T;
T short test015(void);
short T test016(void);
