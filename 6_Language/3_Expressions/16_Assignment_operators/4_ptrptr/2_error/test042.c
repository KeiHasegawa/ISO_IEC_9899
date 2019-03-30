int main(void)
{
   char* volatile * p;
  volatile char* volatile * q;
  p = q;
  return 0;
}
