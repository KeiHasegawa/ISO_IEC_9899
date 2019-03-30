/*
 * Check if array designators using enum member are recognized.
 */
#include <stdio.h>

enum { member_one, member_two };
const char *nm[] = {
  [member_two] = "member two",
  [member_one] = "member one",
};

extern void f(const char**);

int main(void)
{
  f(nm);
  enum { member_one, member_two };
  const char *xyz[] = {
    [member_two] = "member two",
    [member_one] = "member one",
  };
  f(xyz);
  return 0;
}


void f(const char** p)
{
  printf("\"%s\"\n", p[0]);
  printf("\"%s\"\n", p[1]);
}
