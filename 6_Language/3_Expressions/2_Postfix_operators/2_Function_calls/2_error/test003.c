/*
 * o Check if bit field declaration is error, where bit is specified
 *   with function call.
 *
 * o Check if case label is error, where label is specified
 *   with function call.
 */
extern int f(void);

struct T {
  unsigned int a : f();
};

int main(int argc)
{
  switch ( argc ){
  case f():
    break;
  }
  return 0;
}
