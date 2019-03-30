int main(void)
{
   char* const volatile * p;
  const volatile char* volatile * q;
  p = q;
  return 0;
}
