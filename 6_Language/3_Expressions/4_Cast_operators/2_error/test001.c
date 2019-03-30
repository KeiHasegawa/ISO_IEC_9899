/*
 * Check if cast from floating type to pointer type 
 * or cast form pointer type to floating type is error.
 */
void test00(float a, double b, long double c)
{
  (int*)a;
  (int*)b;
  (int*)c;
}

void test01(int* a)
{
  (float)a;
  (double)a;
  (long double)a;
}

void test02(void)
{
  (int*)1.0F;
  (char*)2.0;
  (void*)3.0L;
}

void test03(void)
{
  (float)(void*)0;
  (double)(int*)1;
  (long double)(short int*)2;
}
