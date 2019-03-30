int main(void)
{
  volatile char*  * p;
  const char* const volatile * q;
  p = q;
  return 0;
}
