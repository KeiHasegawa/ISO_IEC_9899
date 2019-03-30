int main(void)
{
  volatile char* const * p;
  const volatile char*  * q;
  p = q;
  return 0;
}
