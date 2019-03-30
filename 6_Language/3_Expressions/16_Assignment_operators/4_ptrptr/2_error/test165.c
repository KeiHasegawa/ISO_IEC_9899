int main(void)
{
  volatile char* volatile * p;
  const char* const * q;
  p = q;
  return 0;
}
