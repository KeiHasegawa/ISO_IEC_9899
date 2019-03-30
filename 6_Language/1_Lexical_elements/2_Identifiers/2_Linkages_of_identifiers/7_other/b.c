extern int a;

int f()
{
  return a;
}

int g()
{
  extern int b;
  return b;
}
