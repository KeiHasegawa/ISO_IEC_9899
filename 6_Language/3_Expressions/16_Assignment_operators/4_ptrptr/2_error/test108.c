int main(void)
{
  const char* volatile * p;
  const volatile char*  * q;
  p = q;
  return 0;
}
