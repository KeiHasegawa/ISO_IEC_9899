/*
 * Check flexible array member works well.
 */
#include <stdio.h>

struct string {
  int size;
  char buffer[];
};

void test000(struct string* ps)
{
  printf("`test000' called\n");
  printf("sizeof(struct string) = %d\n", (int)sizeof(struct string));
  printf("sizeof *ps = %d\n", (int)(sizeof *ps));
  for ( int i = 0 ; i < ps->size ; ++i )
    printf("%c",ps->buffer[i]);
  printf("\n");
}

int main(void)
{
  char pool[100];
  struct string* ps = (struct string*)&pool[0];
  int i = 0;
  ps->buffer[i++] = 'f';
  ps->buffer[i++] = 'l';
  ps->buffer[i++] = 'e';
  ps->buffer[i++] = 'x';
  ps->buffer[i++] = 'i';
  ps->buffer[i++] = 'b';
  ps->buffer[i++] = 'l';
  ps->buffer[i++] = 'e';
  ps->buffer[i++] = ' ';
  ps->buffer[i++] = 'a';
  ps->buffer[i++] = 'r';
  ps->buffer[i++] = 'r';
  ps->buffer[i++] = 'a';
  ps->buffer[i++] = 'y';
  ps->buffer[i++] = ' ';
  ps->buffer[i++] = 'm';
  ps->buffer[i++] = 'e';
  ps->buffer[i++] = 'm';
  ps->buffer[i++] = 'b';
  ps->buffer[i++] = 'e';
  ps->buffer[i++] = 'r';
  ps->size = i;
  test000(ps);
  return 0;
}
