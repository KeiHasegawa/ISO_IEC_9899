int main(void)
{
  const char* volatile * p;
  volatile char* const volatile * q;
  p = q;
  return 0;
}
