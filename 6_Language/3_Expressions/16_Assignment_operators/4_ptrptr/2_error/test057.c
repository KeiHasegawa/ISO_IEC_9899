int main(void)
{
   char* const volatile * p;
  volatile char* const * q;
  p = q;
  return 0;
}
