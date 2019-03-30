/*
 * The storage-class specifier, if any, in the declaration specifiers shall
 * be either extern or static.
 */
typedef int test000(void)
{
  return 0;
}

register int test001(void)
{
  return 0;
}

auto int test002(void)
{
  return 0;
}
