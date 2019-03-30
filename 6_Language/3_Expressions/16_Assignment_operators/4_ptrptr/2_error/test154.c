int main(void)
{
  volatile char* const * p;
  volatile char* volatile * q;
  p = q;
  return 0;
}
