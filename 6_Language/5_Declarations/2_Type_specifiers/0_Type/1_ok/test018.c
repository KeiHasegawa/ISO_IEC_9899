#include <stdio.h>
#include <string.h>

int x = 1;

extern int x;  /* ok */

extern char a[];

char a[] = "hello world";  /* ok */

extern char a[];  /* ok */

int array[10];

extern int array[];  /* ok */

int f();

extern int f();  /* ok */

int f();  /* ok */

enum fruit { apple, grape, orange, melon };  /* ok */

enum fruit;  /* ok */

enum fruit mine = melon;

struct st {
  enum fruit m_fruit;
  char array[10];
};

struct st;  /* ok */

struct st xxx = { grape, "grape" };

int main()
{
  printf("x = %d\n", x);
  printf("sizeof a = %d, strlen(a) = %d\n", (int)(sizeof a), (int)strlen(a));
  printf("sizeof array = %d\n", (int)(sizeof array));
  printf("`f' returns %d\n", f());
  printf("sizeof(enum fruit)  = %d\n", (int)(sizeof(enum fruit)));
  printf("orange = %d\n", orange);
  printf("mine = %d\n", mine);
  printf("xxx.m_fruit = %d, xxx.array = %s\n", xxx.m_fruit, xxx.array);
  return 0;
}

int f()
{
  return 5;
}

