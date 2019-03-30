int main(void)
{
  const char* const volatile * p;
  volatile char* const * q;
  p = q;
  return 0;
}
