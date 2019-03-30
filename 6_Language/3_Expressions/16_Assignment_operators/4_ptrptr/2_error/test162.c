int main(void)
{
  volatile char* volatile * p;
   char* volatile * q;
  p = q;
  return 0;
}
