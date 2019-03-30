/*
 * Check error if modifying the object whose type is const qualified. 
 */
extern const volatile int real_time_clock;

void test000(void)
{
  ++real_time_clock;
}

void test001(const int* p)
{
  (*p)--;
}
