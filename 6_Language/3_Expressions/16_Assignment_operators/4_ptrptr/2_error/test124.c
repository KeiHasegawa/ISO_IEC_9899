int main(void)
{
  const char* const volatile * p;
  const volatile char*  * q;
  p = q;
  return 0;
}
