int main(void)
{
  volatile char* const * p;
  const volatile char* volatile * q;
  p = q;
  return 0;
}
