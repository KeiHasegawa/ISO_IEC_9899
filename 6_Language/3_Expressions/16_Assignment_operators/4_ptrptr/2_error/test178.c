int main(void)
{
  volatile char* const volatile * p;
   char* volatile * q;
  p = q;
  return 0;
}
