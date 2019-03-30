int main(void)
{
  const volatile char* volatile * p;
  const volatile char* const * q;
  p = q;
  return 0;
}
