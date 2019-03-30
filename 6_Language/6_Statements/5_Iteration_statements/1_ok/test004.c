/*
 * Check if nested for statement works well
 */
#include <stdio.h>

void f(int a, int b, int c)
{
  for (int i = 0 ; i != a ; ++i) {
    for (int j = 0 ; j != b ; ++j) {
      for (int k = 0 ; k != c ; ++k) {
	printf("i = %d j = %d k = %d\n", i,j,k);
	if (i == 2 && j == 4 && k == 0)
	  break;
      }
      if (i == 2 && j == 4)
	break;
    }
    if (i == 2)
      break;
  }
}

int main()
{
  f(3,7,2);
  return 0;
}
