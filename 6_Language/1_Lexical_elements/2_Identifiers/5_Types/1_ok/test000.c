/*
 * object types
 *
 * If a member of the required source character set enumerated
 * in 5.2.1 is stored in a char object, its value is guaranteed
 * to be positive.
 */
#include <stdio.h>

void f(char c)
{
  printf("%c", c);
  if ( c <= 0 )
    printf("error\n");
}

void g(void)
{
  f('A');  f('B');  f('C');  f('D');  f('E');  f('F');  f('G');  f('H');
  f('I');  f('J');  f('K');  f('L');  f('M');  f('N');  f('O');  f('P');
  f('Q');  f('R');  f('S');  f('T');  f('U');  f('V');  f('W');  f('X');
  f('Y');  f('Z');
  f('a');  f('b');  f('c');  f('d');  f('e');  f('f');  f('g');  f('h');
  f('i');  f('j');  f('k');  f('l');  f('m');  f('n');  f('o');  f('p');
  f('q');  f('r');  f('s');  f('t');  f('u');  f('v');  f('w');  f('x');
  f('y');  f('z');
  f('0');  f('1');  f('2');  f('3');  f('4');  f('5');  f('6');  f('7');
  f('8');  f('9');
  f('!');  f('"');  f('#');  f('%');  f('&');  f('\'');  f('(');  f(')');
  f('*');  f('+');  f(',');  f('-');  f('.');  f('/');  f(':');  f(';');
  f('<');  f('=');  f('>');  f('?');  f('[');  f('\\');  f(']');  f('^');
  f('_');  f('{');  f('|');  f('}');  f('~');
  printf("\n");
}

int main(void)
{
  g();
  return 0;
}
