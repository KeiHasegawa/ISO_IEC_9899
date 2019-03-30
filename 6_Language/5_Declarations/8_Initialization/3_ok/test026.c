#include <stdio.h>

char array[][10] = {
  "aaaaaaa",
  "bbbbb",
  "cccc",
  "ddd"
};

int main(void)
{
  int i;

  for (i = 0; i < 4; i++)
    printf("%s\n",array[i]);
  return 0;
}
