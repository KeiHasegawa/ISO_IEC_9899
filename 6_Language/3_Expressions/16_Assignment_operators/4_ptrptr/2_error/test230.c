int main(void)
{
  const volatile char* volatile * p;
  const char* volatile * q;
  p = q;
  return 0;
}
