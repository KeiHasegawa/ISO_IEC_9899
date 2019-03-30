/*
 * Check error of the combination with `signed'
 */
unsigned void test000(void);
unsigned signed test001(void);
unsigned unsigned test002(void);
unsigned float test003(void);
unsigned double test004(void);
void unsigned test005(void);
signed unsigned test006(void);
float unsigned test007(void);
double unsigned test008(void);
struct S { int a; };
unsigned struct S test009(void);
struct S unsigned test010(void);
union U { int a; };
unsigned union U test011(void);
union U unsigned test012(void);
typedef void T;
T unsigned test013(void);
unsigned T test014(void);
