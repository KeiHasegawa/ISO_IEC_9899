int main(void)
{
  const char* volatile * p;
  const volatile char* const * q;
  p = q;
  return 0;
}
