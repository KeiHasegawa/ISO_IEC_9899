int main(void)
{
  const char* const volatile * p;
  const char* volatile * q;
  p = q;
  return 0;
}
