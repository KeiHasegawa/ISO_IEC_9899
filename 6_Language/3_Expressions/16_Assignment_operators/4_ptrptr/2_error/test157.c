int main(void)
{
  volatile char* const * p;
  const volatile char* const * q;
  p = q;
  return 0;
}
