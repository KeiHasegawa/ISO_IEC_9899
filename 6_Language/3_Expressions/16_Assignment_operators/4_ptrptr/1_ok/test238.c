int main(void)
{
  const volatile char* volatile * p;
  const volatile char* volatile * q;
  p = q;
  return 0;
}
