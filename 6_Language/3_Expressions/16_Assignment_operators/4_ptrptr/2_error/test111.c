int main(void)
{
  const char* volatile * p;
  const volatile char* const volatile * q;
  p = q;
  return 0;
}
