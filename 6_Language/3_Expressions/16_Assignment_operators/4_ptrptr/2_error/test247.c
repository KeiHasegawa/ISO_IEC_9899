int main(void)
{
  const volatile char* const volatile * p;
  const char* const volatile * q;
  p = q;
  return 0;
}
