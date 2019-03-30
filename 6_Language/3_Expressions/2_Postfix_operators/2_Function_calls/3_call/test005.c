#include <stdio.h>

int main(void)
{
  char c;
  unsigned char uc;
  short int si;
  unsigned short int usi;
  int i;
  unsigned int ui;
  long int li;
  unsigned long int uli;

  c = 'a';
  printf("c = '%c'\n",c);

  uc = 128;
  printf("uc = %d\n",uc);

  si = -3;
  printf("si = %d\n",si);

  usi = 0x89ab;
  printf("usi = 0x%x\n",usi);

  i = -1;
  printf("i = %d(0x%x)\n",i,i);

  ui = 0x9abcdef0;
  printf("ui = 0x%x\n",ui);

  li = -2;
  printf("li = %ld(0x%lx)\n",li,li);

  uli = 0xabcdef01;
  printf("uli = %lu(0x%lx)\n",uli,uli);
  
  return 0;
}
