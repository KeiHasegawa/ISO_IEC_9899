int main(void)
{
  volatile char*  * p;
  const volatile char* const volatile * q;
  p = q;
  return 0;
}
