int main(void)
{
   char* const volatile * p;
  const volatile char* const volatile * q;
  p = q;
  return 0;
}
