int main(void)
{
  const volatile char* const volatile * p;
  volatile char* const * q;
  p = q;
  return 0;
}
