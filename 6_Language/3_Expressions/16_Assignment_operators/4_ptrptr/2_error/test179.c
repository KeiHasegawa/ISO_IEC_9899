int main(void)
{
  volatile char* const volatile * p;
   char* const volatile * q;
  p = q;
  return 0;
}
