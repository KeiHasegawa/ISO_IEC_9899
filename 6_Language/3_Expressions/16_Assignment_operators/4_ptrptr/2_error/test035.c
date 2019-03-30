int main(void)
{
   char* volatile * p;
   char* const volatile * q;
  p = q;
  return 0;
}
