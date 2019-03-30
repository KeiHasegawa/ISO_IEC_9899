/*
 * If the declarator includes an identifier list, each declaration in the
 * declaration list shall have at least one declarator, those declarators
 * shall declare only identifiers from the identifier list, and every
 * identifier in the identifier list shall be declared. An identifier declared
 * as a typedef name shall not be redeclared as a parameter. The declarations
 * in the declaration list shall contain no storage-class specifier other than
 * register and no initializations.
 */
void test000(a,b,c)
     int;  /* error. no declarator */
     int a, b, c;
{
}

void test001(a,b,c)
     int a, b, c;
     int d;  /* error */
{
}

void test002(a,b,c)
     int a, b; /* error */
{
}

typedef int A;

void test003(A) /* error. parameter omitted. */
     int A;
{
}

void test004(a, b, c, d)
     typedef int a; /* error */
     extern int b; /* error */
     static int c; /* error */
     auto int d; /* error */
{
}

void test005(a,b)
     int a;
     int b = 2; /* error */
{
}
