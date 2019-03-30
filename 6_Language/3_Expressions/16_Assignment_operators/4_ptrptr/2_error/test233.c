int main(void)
{
  const volatile char* volatile * p;
  volatile char* const * q;
  p = q;
  return 0;
}
