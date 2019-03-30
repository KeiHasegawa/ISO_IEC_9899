int main(void)
{
  volatile char* volatile * p;
  const char* const volatile * q;
  p = q;
  return 0;
}
