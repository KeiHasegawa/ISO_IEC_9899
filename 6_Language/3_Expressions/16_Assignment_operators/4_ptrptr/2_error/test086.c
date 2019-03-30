int main(void)
{
  const char* const * p;
  const char* volatile * q;
  p = q;
  return 0;
}
