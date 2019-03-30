/*
 * All declarations in the same scope that refer to the same object or
 * function shall specify compatible types.
 */
#include <stdio.h>

extern int test_000[];

int* test_000;

int test_001(void);
int test_001(int);


