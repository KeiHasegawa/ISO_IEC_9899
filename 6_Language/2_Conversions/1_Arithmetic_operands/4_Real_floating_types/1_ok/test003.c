/*
 * Check if conversions from `double' to `float' are well done.
 *
 * Note : We assumed that compiler uses
 * IEEE 754 floating constant format.
 *
 * See also comments of
../../../../1_Lexical_elements/3_Constants/1_Floating_constants/1_ok/test001.c
../../../../1_Lexical_elements/3_Constants/1_Floating_constants/1_ok/test002.c
 */
#include <stdio.h>

void f(float f)
{
  union {
    float f;
    int i;
  } u = { f };
  printf("0x%08x\n", u.i);
}

int main(void)
{
  double a[] = {
    0x000001p-149, /* �P���x�ŏ��񐳋K���� */
    0x7fffffp-149, /* �P���x�ő�񐳋K���� */
    0x800000p-149, /* �P���x�ŏ����K���� */
    0xffffffp+104, /* �P���x�ő吳�K���� */
  };
  for ( int i = 0 ; i < sizeof a/sizeof a[0] ; ++i )
    f(a[i]);
  return 0;
}
