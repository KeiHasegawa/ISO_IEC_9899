/*
 * For a function with external linkage, the following restrictions apply. If
 * a function is declared with an inline function specifier, then it shall
 * also be defined in the same translation unit. If all of the file scope
 * declarations for a function in a translation unit include the inline
 * function specifier without extern, then the definition in that translation
 * unit is an inline definition. An inline definition does not provide an
 * external definition for the function, and does not forbid an external
 * definition in another translation unit. An inline definition provides an
 * alternative to an external definition, which a translator may use to
 * implement any call to the function in the same translation unit. It is
 * unspecified whether a call to the function uses the inline definition or
 * the external definition.
 */

inline int test000(void);
/* no inline definition of `test000' */

