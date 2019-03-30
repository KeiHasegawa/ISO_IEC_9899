int main(void)
{
  volatile char* const volatile * p;
  const volatile char* const volatile * q;
  p = q;
  return 0;
}
