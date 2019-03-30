int main(void)
{
  const volatile char* const * p;
  const char* volatile * q;
  p = q;
  return 0;
}
