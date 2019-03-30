int main(void)
{
  volatile char* const volatile * p;
  const char*  * q;
  p = q;
  return 0;
}
