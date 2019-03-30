int main(void)
{
  volatile char* volatile * p;
  volatile char*  * q;
  p = q;
  return 0;
}
