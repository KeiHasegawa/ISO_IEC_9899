int main(void)
{
  volatile char*  * p;
   char* volatile * q;
  p = q;
  return 0;
}
