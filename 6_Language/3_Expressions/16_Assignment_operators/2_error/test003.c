/*
 * Check if assignments are error where qualifier discared.
 */

/* pointer to function */
void test00(void)
{
  void (*p)(char*);
  void (*q)(const char*);
  p = q;
}

/* pointer to array */
void test01(void)
{
  int (*p)[];
  const int (*q)[];
  p = q;
}
