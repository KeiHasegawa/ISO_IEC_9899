/*
 * Check if variable declaration with `inline' is error.
 */
inline int a;  /* error. inline specified for `int' */

typedef int F(void);

inline F f;  /* ok. inline specified for function */

inline int f(void)
{
  return 1;
}

typedef int I;

inline I b;  /* error. inline specified for `I' typedefed `int' */

inline F* pf;  /* error. inline specified for pointer to function */
