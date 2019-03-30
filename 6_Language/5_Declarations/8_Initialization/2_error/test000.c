/*
 * Check if initializer attempting to provide a value for an object
 * not contained within the entity being initialized is error.
 */
int a = { 1, 2 };
int b[2] = { 1, 2, 3 };
struct S {
  int a;
};
struct S c = { 1, 2 };

void f()
{
  int a = { 1, 2 };
  int b[2] = { 1, 2, 3 };
  struct S c = { 1, 2 };
}
