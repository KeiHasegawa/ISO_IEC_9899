int x = 1;

extern int x;  /* ok */

extern const int x;  /* error */

extern char a[];

char a[] = "hello world";  /* ok */

extern const char a[];  /* error */

int array[10];

extern int array[];  /* ok */

extern int array[10];  /* ok */

extern int array[20];  /* error */

int f();

extern int f();  /* ok */

int f();  /* ok */

const int f();  /* error */

enum fruit;

enum fruit { apple, grape, orange, melon };  /* ok */

enum fruit;  /* ok */

enum fruit mine = melon;  /* of cause, ok */

enum fruit { Apple, Grape, Orange };  /* error */

enum fruit; /* ok */

struct st {
  enum fruit m_fruit;
  char array[5];
};

struct st;  /* ok */

struct st {
  enum fruit m_fruit;
  char array[5];
};                        /* error */

extern int (*pf)();

int g();
int (*pf)() = &g;   /* ok */

extern int (*pf)();  /* ok */

extern const int (*pf)();  /* error */

int* ptr;

extern int* ptr;  /* ok */

extern const int* ptr;  /* error */

char* pc;

extern char* pc;  /* ok */

extern char* const pc;  /* error */

union Uni;

union Uni* pu;

extern union Uni* pu;  /* ok */

union Uni {
  int i[2];
  double d;
};

extern union Uni* pu;  /* ok */
