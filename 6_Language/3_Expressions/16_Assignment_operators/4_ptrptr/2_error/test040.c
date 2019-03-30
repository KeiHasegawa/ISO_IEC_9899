int main(void)
{
   char* volatile * p;
  volatile char*  * q;
  p = q;
  return 0;
}
