/*
 * An inline definition (see below) of a function with external linkage shall
 * not contain a definition of an object with static storage duration that can
 * be modified, and shall not contain a reference to an identifier with
 * internal linkage.
 */
inline int f(int a)
{
  static int si;
  return a + 5;
}

static int si; /* internal linkage */

inline int g(void)
{
  return ++si;
}

inline int h(void)
{
  static int si;
  return ++si;
}
