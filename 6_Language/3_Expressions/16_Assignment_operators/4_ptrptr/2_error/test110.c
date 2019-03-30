int main(void)
{
  const char* volatile * p;
  const volatile char* volatile * q;
  p = q;
  return 0;
}
