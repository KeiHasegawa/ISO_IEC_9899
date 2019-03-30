/*
 * Check ISO sample works well
 */

enum f { c = sizeof (enum f) };

/*
 * the behavior is undefined since the size of the respective enumeration
 * type is not necessarily known when sizeof is encountered.
 */
