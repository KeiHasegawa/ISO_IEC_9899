int main(void)
{
  const volatile char*  * p;
  volatile char* const volatile * q;
  p = q;
  return 0;
}
