/*
 * Check if type name is recognized in compound literal.
 */
void test00(void)
{
  /* automatic storage duration */
  (const char[]){"/tmp/fileXXXXXX"}[3] = 'P';  /* error. not modifiable. */
}
