int main(void)
{
  const char* const volatile * p;
  volatile char*  * q;
  p = q;
  return 0;
}
