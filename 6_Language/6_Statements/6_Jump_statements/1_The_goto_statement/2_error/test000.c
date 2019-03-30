/*
 * The identifier in a goto statement shall name a label located somewhere
 * in the enclosing function.
 */
void test000(void)
{
  int a;
  goto a;
}

void test001(void)
{
  goto label;
}

void test002(void)
{
 label:
  goto test001;
}
