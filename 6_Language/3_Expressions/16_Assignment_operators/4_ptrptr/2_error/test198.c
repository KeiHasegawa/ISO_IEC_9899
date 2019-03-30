int main(void)
{
  const volatile char*  * p;
  const char* volatile * q;
  p = q;
  return 0;
}
