/*
 * Check if incomplete array declaration is error,
 * whose storage-class-specifier is `auto', `register' and `static'.
 */
void f(void)
{
  auto int a[];
  register int b[];
  static int c[];
}
