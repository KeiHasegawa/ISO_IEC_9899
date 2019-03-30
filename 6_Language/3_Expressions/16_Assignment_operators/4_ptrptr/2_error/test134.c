int main(void)
{
  volatile char*  * p;
  const char* volatile * q;
  p = q;
  return 0;
}
