/*
 * Check error if operator is applied for constant pointer invalidly.
 */
void* p000 = (void*)0x10 + 5;

void* p001 = 5 + (void*)0x10;

void* p002 = (void*)0x10 - 5;

int* p003 = 0x20 - (int*)0x10;

void* p004 = (void*)0x1000 - (void*)0x0500;
