int main(void)
{
  const volatile char* volatile * p;
  const volatile char*  * q;
  p = q;
  return 0;
}
