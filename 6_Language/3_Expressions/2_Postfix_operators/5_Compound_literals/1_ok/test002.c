/*
 * Check if ISO/IEC 9899 sample works well.
 */
#include <stdio.h>

struct point {
  int y;
  int x;
};

void drawline(struct point p, struct point q)
{
  printf("(%d,%d),(%d,%d)\n", p.x, p.y, q.x, q.y);
}

void test00(void)
{
  printf("`test00' called\n");
  drawline((struct point){.x=1, .y=1},
	   (struct point){.x=3, .y=4});
}

void drawline2(struct point* p, struct point* q)
{
  printf("(%d,%d),(%d,%d)\n", p->x, p->y, q->x, q->y);
}

void test01(void)
{
  printf("`test01' called\n");
  drawline2(&(struct point){.x=1, .y=1},
	   &(struct point){.x=3, .y=4});
}

void test02(void)
{
  /* string literal is static storage duration */
  char* p = 
#ifdef __cplusplus
    (char*)
#endif
    "/tmp/fileXXXXXX";
  p[3] = 'P';  /* ok. but undefined behavior. */
}

void test03(void)
{
  printf("`test03' called\n");
  /* compound literal is automatic storage duration */
  char* p = (char []){"/tmp/fileXXXXXX"};
  printf("%s\n", p);
  p[3] = 'P';
  printf("%s\n", p);
}

struct s { int a; int b; };

void f(struct s s)
{
  printf("%d %d\n", s.a, s.b);
}

void test04(void)
{
  printf("`test04' called\n");
  for (int i = 0; i < 10; i++) {
    f((struct s){.a = i, .b = 42});
  }
  for (int i = 0; i < 10; i++)
    f((struct s){.a = i, .b = 42});
}

struct s2 { int i; };

int ff(void)
{
  struct s2 *p = 0, *q;
  int j;
  for (j = 0; j < 2; j++)
    q = p, p = &((struct s2){ j });
  return p == q && q->i == 1;
}

void test05(void)
{
  printf("`test05' called\n");
  if ( ff() == 1 )
    printf("ok\n");
  else
    printf("error\n");
}

int main(void)
{
  test00();
  test01();
  test03();
  test04();
  test05();
  return 0;
}
