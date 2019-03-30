int main(void)
{
  const char* volatile * p;
  const char*  * q;
  p = q;
  return 0;
}
