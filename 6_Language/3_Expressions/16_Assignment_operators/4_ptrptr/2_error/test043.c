int main(void)
{
   char* volatile * p;
  volatile char* const volatile * q;
  p = q;
  return 0;
}
