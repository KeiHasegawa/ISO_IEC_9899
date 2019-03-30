/*
 * Check if undeclared member reference is error.
 */
struct T {
  int a;
};

int f(struct T* p)
{
  return p->b;
}
