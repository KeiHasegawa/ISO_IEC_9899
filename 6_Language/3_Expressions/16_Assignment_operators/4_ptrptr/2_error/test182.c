int main(void)
{
  volatile char* const volatile * p;
  const char* volatile * q;
  p = q;
  return 0;
}
