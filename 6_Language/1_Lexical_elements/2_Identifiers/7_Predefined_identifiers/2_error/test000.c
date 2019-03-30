/*
 * Check if `__func__' is recognized.
 */
char a[] = __func__;  /* error. outside of any function. */
