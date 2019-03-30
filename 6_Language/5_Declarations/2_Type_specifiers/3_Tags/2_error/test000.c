/*
 * A specific type shall have its content defined at most once.
 */
struct S { int a; };

struct S { int a; };

union U { int b; };

union U { int c; };

enum E { d, e, f };

enum E { d, e };

