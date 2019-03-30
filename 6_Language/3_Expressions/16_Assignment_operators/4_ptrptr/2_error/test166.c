int main(void)
{
  volatile char* volatile * p;
  const char* volatile * q;
  p = q;
  return 0;
}
