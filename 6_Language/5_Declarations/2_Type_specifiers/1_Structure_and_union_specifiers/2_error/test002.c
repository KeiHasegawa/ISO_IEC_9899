/*
 * A bit-field shall have a type that is a qualified or unqualified version
 * of signed int or unsigned int. A bit-field is interpreted as a signed or
 * unsigned integer type consisting of the specified number of bits.
 */
struct S1 {
  int* a : 3;
};

struct S2 {
  int b[10] : 4;
};
