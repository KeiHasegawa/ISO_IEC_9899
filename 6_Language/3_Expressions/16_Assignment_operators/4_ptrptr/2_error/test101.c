int main(void)
{
  const char* volatile * p;
  const char* const * q;
  p = q;
  return 0;
}
