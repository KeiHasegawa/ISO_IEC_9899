int main(void)
{
  volatile char* const * p;
  const char* const volatile * q;
  p = q;
  return 0;
}
