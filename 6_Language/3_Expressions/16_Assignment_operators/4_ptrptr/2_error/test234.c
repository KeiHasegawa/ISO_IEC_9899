int main(void)
{
  const volatile char* volatile * p;
  volatile char* volatile * q;
  p = q;
  return 0;
}
