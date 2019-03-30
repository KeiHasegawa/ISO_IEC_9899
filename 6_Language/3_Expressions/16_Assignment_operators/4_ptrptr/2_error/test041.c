int main(void)
{
   char* volatile * p;
  volatile char* const * q;
  p = q;
  return 0;
}
