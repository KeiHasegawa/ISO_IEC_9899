int main(void)
{
  const char* volatile * p;
  volatile char* const * q;
  p = q;
  return 0;
}
