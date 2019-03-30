int main(void)
{
   char* volatile * p;
  const volatile char*  * q;
  p = q;
  return 0;
}
