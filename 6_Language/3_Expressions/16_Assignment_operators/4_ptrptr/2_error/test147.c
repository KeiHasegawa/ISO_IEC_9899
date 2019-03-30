int main(void)
{
  volatile char* const * p;
   char* const volatile * q;
  p = q;
  return 0;
}
