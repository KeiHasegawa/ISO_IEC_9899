int main(void)
{
  volatile char* const volatile * p;
  volatile char*  * q;
  p = q;
  return 0;
}
