typedef int A;
const A c = 1;

void f(void)
{
  c = 2;  /* error : modify constant object */
}
