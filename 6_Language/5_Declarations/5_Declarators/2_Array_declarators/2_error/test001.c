/*
 * Only ordinary identifiers (as defined in 6.1.2.3) with block scope or
 * function prototype scope and without linkage can have a variably modified
 * type. If an identifier is declared to be an object with static storage
 * duration, it shall not have a variable length array type.
 */
int n;

int a[n];
