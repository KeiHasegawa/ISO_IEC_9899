int main(void)
{
  const volatile char*  * p;
  volatile char* volatile * q;
  p = q;
  return 0;
}
