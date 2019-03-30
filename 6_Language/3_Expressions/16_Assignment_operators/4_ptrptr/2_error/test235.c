int main(void)
{
  const volatile char* volatile * p;
  volatile char* const volatile * q;
  p = q;
  return 0;
}
