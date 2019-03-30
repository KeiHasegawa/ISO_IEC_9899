/*
 * Check if structure declaration without `;'
 * is error.
 */

struct S {
  int a;
  float b;
}                /* missing `;' */

struct S s;

union U {
  int a;
  float b;
}                /* missing `;' */

union U u;

enum E {
  a,
  b,
}                /* missing `;' */

enum E e;
