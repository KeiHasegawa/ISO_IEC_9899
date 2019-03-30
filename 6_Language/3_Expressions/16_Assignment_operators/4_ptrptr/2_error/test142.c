int main(void)
{
  volatile char*  * p;
  const volatile char* volatile * q;
  p = q;
  return 0;
}
