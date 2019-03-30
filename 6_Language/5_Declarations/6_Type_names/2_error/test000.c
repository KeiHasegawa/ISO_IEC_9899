/*
 * Check if type-name is recognized in several context
 */

void test000(void)
{
  int* f();
  (int* ()){f};
}

void test001(void)
{
  sizeof(int*());
  sizeof(int (*const [])(unsigned int, ...));
}

void test002(void)
{
  (int *[3])0;
  (int *())0;
  (int (*const [])(unsigned int, ...))0;
}
