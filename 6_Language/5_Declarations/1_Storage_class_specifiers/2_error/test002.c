/*
 * Check if typedef-name and tag-name is different.
 */
struct S { int a; };
typedef struct S T;  /* T declared as type-name whose type is struct S */
struct T* p;         /* `p' declared as pointer to incomplete struct 
                        whose tag-name is `T' */
int f(void)
{
  return p->a;  /* error */
}
