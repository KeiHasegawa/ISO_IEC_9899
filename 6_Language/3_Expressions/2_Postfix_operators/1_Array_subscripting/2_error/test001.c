/*
 * Check if array subscriptiong used as case label is error.
 */
#include <stdio.h>

int a[10];

int main(int argc, char** argv)
{
  switch ( argc ){
  case a[0]:
    break;
  }
  return 0;
}
