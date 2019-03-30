/*
 * Check if block scope enum declaration at inline function works well.
 */
#include <stdio.h>

inline int f(int n)
{
  printf("f called n = %d\n", n);
  enum kita_nihon {
    hokkaido, aomori, akita, iwate, yamagata, miyagi, hukushima
  };
  switch (n) {
  case hokkaido:
    printf("jagaimo\n");
    break;
  case aomori:
    printf("ringo\n");
    break;
  case akita:
    printf("kiritanpo\n");
    break;
  case iwate:
    printf("mekabu\n");
    break;
  case yamagata:
    printf("sakuranbo\n");
    break;
  case miyagi:
    printf("okome\n");
    break;
  case hukushima:
    printf("kitakata ramen\n");
    break;
  }
  return n + 5;
}

inline void g(int);

int main()
{
  f(0), f(4), f(7);
  g(3);
  return 0;
}

inline void g(int n)
{
  printf("g called n = %d\n", n);
  enum { kagawa, tokushima, ehime, kouchi } shikoku;
  switch (n) {
  case kagawa:
    printf("udon\n");
    break;
  case tokushima:
    printf("awa odori\n");
    break;
  case ehime:
    printf("mikan\n");
    break;
  case kouchi:
    printf("katsuo\n");
    break;
  }
}
