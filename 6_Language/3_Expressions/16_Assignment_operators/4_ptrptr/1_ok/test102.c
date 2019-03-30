int main(void)
{
  const char* volatile * p;
  const char* volatile * q;
  p = q;
  return 0;
}
