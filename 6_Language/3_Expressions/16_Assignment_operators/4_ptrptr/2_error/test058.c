int main(void)
{
   char* const volatile * p;
  volatile char* volatile * q;
  p = q;
  return 0;
}
