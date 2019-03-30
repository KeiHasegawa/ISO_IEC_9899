int main(void)
{
  volatile char*  * p;
  volatile char* const volatile * q;
  p = q;
  return 0;
}
