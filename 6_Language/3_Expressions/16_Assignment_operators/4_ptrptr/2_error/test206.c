int main(void)
{
  const volatile char*  * p;
  const volatile char* volatile * q;
  p = q;
  return 0;
}
