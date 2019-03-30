int main(void)
{
  volatile char*  * p;
  volatile char* volatile * q;
  p = q;
  return 0;
}
