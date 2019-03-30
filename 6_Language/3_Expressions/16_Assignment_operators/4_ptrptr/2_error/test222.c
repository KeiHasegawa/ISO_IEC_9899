int main(void)
{
  const volatile char* const * p;
  const volatile char* volatile * q;
  p = q;
  return 0;
}
