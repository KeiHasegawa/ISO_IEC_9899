int main(void)
{
  volatile char* const volatile * p;
  const char* const * q;
  p = q;
  return 0;
}
