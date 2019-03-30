/*
 * Check error of the combination with `signed'
 */
signed void test000(void);
signed signed test001(void);
signed unsigned test002(void);
signed float test003(void);
signed double test004(void);
void signed test005(void);
unsigned signed test006(void);
float signed test007(void);
double signed test008(void);
struct S { int a; };
signed struct S test009(void);
struct S signed test010(void);
union U { int a; };
signed union U test011(void);
union U signed test012(void);
typedef void T;
T signed test013(void);
signed T test014(void);
