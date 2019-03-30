#include <stdio.h>


int mem = 2;

int main(void)
{
  int eax, ebx, ecx, edx, esi, edi;
  int ext;
  eax = 1;
  ebx = 2;
  ecx = 3;
  edx = 4;
  esi = 5;
  edi = 6;
  ext = mem + esi;
  printf("eax = %d ebx = %d ecx = %d edx = %d esi = %d edi = %d, ext = %d\n",
	 eax,ebx,ecx,edx,esi,edi,ext);
  return 0;
}
