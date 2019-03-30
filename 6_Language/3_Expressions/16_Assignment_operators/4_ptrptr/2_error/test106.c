int main(void)
{
  const char* volatile * p;
  volatile char* volatile * q;
  p = q;
  return 0;
}
