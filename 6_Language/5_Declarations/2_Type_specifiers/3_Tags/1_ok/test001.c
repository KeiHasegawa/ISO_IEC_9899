/*
 * Check ISO sample works well.
 */
#include <stdio.h>

typedef struct tnode TNODE;
struct tnode {
  int count;
  TNODE *left, *right;
};

void print(struct tnode* p)
{
  printf(" %d", p->count);
  if ( p->left )
    print(p->left);
  if ( p->right )
    print(p->right);
}

void test000(void)
{
  printf("`test000' called\n");
  struct tnode a = { 1, 0, 0 };
  struct tnode b = { 2, &a, 0 };
  struct tnode c = { 3, 0, &b };
  struct tnode d = { 4, 0, 0 };
  struct tnode e = { 5, &d, &c };
  print(&e);
  printf("\n");
}

struct s2;

struct s1 {
  struct s2 *s2p;
  int a;
};

struct s2 {
  struct s1 *s1p;
  char* b;
};

void print_s2(struct s2*);

void print_s1(struct s1* p)
{
  printf(" %d", p->a);
  if ( p->s2p )
    print_s2(p->s2p);
}

void print_s2(struct s2* p)
{
  printf(" %s", p->b);
  if ( p->s1p )
    print_s1(p->s1p);
}

void test001(void)
{
  printf("`test001' called\n");
  struct s1 a = { 0, 1 };
  struct s2 b = { &a, "abc" };
  struct s1 c = { &b, 2 };
  struct s2 d = { &c, "def" };
  struct s1 e = { &d, 3 };
  print_s1(&e);
  printf("\n");
}

int main(void)
{
  test000();
  test001();
  return 0;
}
