int main(void)
{
  const volatile char* volatile * p;
  volatile char*  * q;
  p = q;
  return 0;
}
