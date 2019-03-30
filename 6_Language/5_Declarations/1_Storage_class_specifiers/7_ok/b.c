struct T {
  int a[3];
};

struct T t = { 1, 2, 3 };

struct T* f(void)
{
  return &t;
}
