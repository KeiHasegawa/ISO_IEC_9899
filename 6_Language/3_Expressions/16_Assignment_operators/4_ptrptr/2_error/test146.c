int main(void)
{
  volatile char* const * p;
   char* volatile * q;
  p = q;
  return 0;
}
