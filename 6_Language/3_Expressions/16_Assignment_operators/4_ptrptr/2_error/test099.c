int main(void)
{
  const char* volatile * p;
   char* const volatile * q;
  p = q;
  return 0;
}
