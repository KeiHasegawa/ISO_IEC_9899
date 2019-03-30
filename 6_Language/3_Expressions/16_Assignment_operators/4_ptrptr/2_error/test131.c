int main(void)
{
  volatile char*  * p;
   char* const volatile * q;
  p = q;
  return 0;
}
