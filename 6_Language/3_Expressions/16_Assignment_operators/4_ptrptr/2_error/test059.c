int main(void)
{
   char* const volatile * p;
  volatile char* const volatile * q;
  p = q;
  return 0;
}
