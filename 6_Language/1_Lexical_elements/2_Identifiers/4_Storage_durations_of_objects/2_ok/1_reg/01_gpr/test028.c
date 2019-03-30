#include <stdio.h>


int main(void)
{
  int eax, ebx, ecx, edx, esi, edi;
  eax = 1;
  ebx = 2;
  ecx = 3;
  edx = 4;
  esi = 5;
  edi = 6;
  printf("eax = %d ebx = %d ecx = %d edx = %d esi = %d edi = %d ext = %d\n",
	 eax,ebx,ecx,edx,esi,edi,7);
  return 0;
}
