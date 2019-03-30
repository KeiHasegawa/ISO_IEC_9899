/*
 * The only storage-class specifier that shall occur in a parameter declaration
 * is register.
 */
void test000(typedef int);
void test001(extern int);
void test002(static int);
void test003(register int);  /* ok */
void test004(auto int);

void test010(typedef int a)
{
}

void test011(extern int a)
{
}

void test012(static int a)
{
}

void test013(register int a)  /* ok */
{
}

void test014(auto int a)
{
}



