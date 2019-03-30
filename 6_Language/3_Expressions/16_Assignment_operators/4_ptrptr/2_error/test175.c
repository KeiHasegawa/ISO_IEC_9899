int main(void)
{
  volatile char* volatile * p;
  const volatile char* const volatile * q;
  p = q;
  return 0;
}
