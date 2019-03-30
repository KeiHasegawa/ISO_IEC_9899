int main(void)
{
  const char* volatile * p;
  volatile char*  * q;
  p = q;
  return 0;
}
