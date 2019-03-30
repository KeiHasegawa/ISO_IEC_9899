int main(void)
{
  const char* volatile * p;
  const char* const volatile * q;
  p = q;
  return 0;
}
