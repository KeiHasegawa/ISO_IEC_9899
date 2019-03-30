int main(void)
{
  volatile char* const * p;
  volatile char* const volatile * q;
  p = q;
  return 0;
}
