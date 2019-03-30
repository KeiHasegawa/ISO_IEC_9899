int main(void)
{
  volatile char* volatile * p;
  const char*  * q;
  p = q;
  return 0;
}
