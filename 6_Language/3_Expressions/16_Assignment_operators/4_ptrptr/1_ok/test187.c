int main(void)
{
  volatile char* const volatile * p;
  volatile char* const volatile * q;
  p = q;
  return 0;
}
