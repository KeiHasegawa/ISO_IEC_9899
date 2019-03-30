/*
 * ISO/IEC 9899 says like bellow
 *
 * If at the end of the translation unit containing
 * int i[];
 * the array i still has incomplete type, the array is assumed to have one
 * element. This element is initialized to zero on program startup.
 *
 * But we does not allow this code.
 */
int i[];
