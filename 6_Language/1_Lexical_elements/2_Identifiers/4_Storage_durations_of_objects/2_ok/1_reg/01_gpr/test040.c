#include <stdio.h>


const int mem = 1;

int main(void)
{
  int eax, ebx, ecx, edx, esi, edi;
  eax = 1;
  ebx = 2;
  ecx = 3;
  edx = 4;
  esi = 5;
  edi = 6;
  if ( 2 != mem )
  printf("eax = %d ebx = %d ecx = %d edx = %d esi = %d edi = %d\n",
	 eax,ebx,ecx,edx,esi,edi);
  return 0;
}
