/*
 * Check struct or union has a member to a pointer to an instance of itself.
 */
#include <stdio.h>

struct tnode {
  int n;
  struct tnode* left;
  struct tnode* right;
};

void print(struct tnode* p)
{
  printf(" %d", p->n);
  if ( p->left )
    print(p->left);
  if ( p->right )
    print(p->right);
}

int main(void)
{
  struct tnode a = { 1, 0, 0 };
  struct tnode b = { 2, 0, 0 };
  struct tnode c = { 3, &b, &a };
  struct tnode d = { 4, 0, &c };
  struct tnode e = { 5, &d, 0 };
  print(&e);
  printf("\n");
  return 0;
}

