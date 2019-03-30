int main(void)
{
  const volatile char* const * p;
  volatile char* const volatile * q;
  p = q;
  return 0;
}
