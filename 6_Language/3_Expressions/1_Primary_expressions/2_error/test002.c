/*
 * Check if `__func__' referenced outside of any function is error.
 * Check if type of `__func__' is `const char []'.
 * Check if `__func__' declared as variable is error.
 */
const char* p = __func__;  /* error */

void f(void)
{
  char* q = __func__;       /* error. discard qualifier */
  char (*pa)[] = &__func__; /* error. */
  int __func__;             /* error */
}
