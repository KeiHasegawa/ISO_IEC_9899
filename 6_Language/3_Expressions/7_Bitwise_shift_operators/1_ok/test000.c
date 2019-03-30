/*
 << Check if operator `<<' is recognized.
 */
#include <stdio.h>

enum E { a, b, c };

void test0000(char x, char y)
{
  printf("`test0000' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

void test0001(char x, signed char y)
{
  printf("`test0001' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

void test0002(char x, unsigned char y)
{
  printf("`test0002' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

void test0003(char x, short int y)
{
  printf("`test0003' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

void test0004(char x, unsigned short int y)
{
  printf("`test0004' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

void test0005(char x, int y)
{
  printf("`test0005' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

void test0006(char x, unsigned int y)
{
  printf("`test0006' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

void test0007(char x, long int y)
{
  printf("`test0007' called\n");
  printf("%d << %ld = %d\n", x, y, x << y);
}

void test0008(char x, unsigned long int y)
{
  printf("`test0008' called\n");
  printf("%d << %ld = %d\n", x, y, x << y);
}

void test0009(char x, long long int y)
{
  printf("`test0009' called\n");
  printf("%d << %lld = %d\n", x, y, x << y);
}

void test0010(char x, unsigned long long int y)
{
  printf("`test0010' called\n");
  printf("%d << %lld = %d\n", x, y, x << y);
}

void test0014(char x, enum E y)
{
  printf("`test0014' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

void test0100(signed char x, char y)
{
  printf("`test0100' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

void test0101(signed char x, signed char y)
{
  printf("`test0101' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

void test0102(signed char x, unsigned char y)
{
  printf("`test0102' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

void test0103(signed char x, short int y)
{
  printf("`test0103' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

void test0104(signed char x, unsigned short int y)
{
  printf("`test0104' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

void test0105(signed char x, int y)
{
  printf("`test0105' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

void test0106(signed char x, unsigned int y)
{
  printf("`test0106' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

void test0107(signed char x, long int y)
{
  printf("`test0107' called\n");
  printf("%d << %ld = %d\n", x, y, x << y);
}

void test0108(signed char x, unsigned long int y)
{
  printf("`test0108' called\n");
  printf("%d << %ld = %d\n", x, y, x << y);
}

void test0109(signed char x, long long int y)
{
  printf("`test0109' called\n");
  printf("%d << %lld = %d\n", x, y, x << y);
}

void test0110(signed char x, unsigned long long int y)
{
  printf("`test0110' called\n");
  printf("%d << %lld = %d\n", x, y, x << y);
}

void test0114(signed char x, enum E y)
{
  printf("`test0114' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}


void test0200(unsigned char x, char y)
{
  printf("`test0200' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

void test0201(unsigned char x, signed char y)
{
  printf("`test0201' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

void test0202(unsigned char x, unsigned char y)
{
  printf("`test0202' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

void test0203(unsigned char x, short int y)
{
  printf("`test0203' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

void test0204(unsigned char x, unsigned short int y)
{
  printf("`test0204' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

void test0205(unsigned char x, int y)
{
  printf("`test0205' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

void test0206(unsigned char x, unsigned int y)
{
  printf("`test0206' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

void test0207(unsigned char x, long int y)
{
  printf("`test0207' called\n");
  printf("%d << %ld = %d\n", x, y, x << y);
}

void test0208(unsigned char x, unsigned long int y)
{
  printf("`test0208' called\n");
  printf("%d << %ld = %d\n", x, y, x << y);
}

void test0209(unsigned char x, long long int y)
{
  printf("`test0209' called\n");
  printf("%d << %lld = %d\n", x, y, x << y);
}

void test0210(unsigned char x, unsigned long long int y)
{
  printf("`test0210' called\n");
  printf("%d << %lld = %d\n", x, y, x << y);
}

void test0214(unsigned char x, enum E y)
{
  printf("`test0214' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

void test0300(short int x, char y)
{
  printf("`test0300' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

void test0301(short int x, signed char y)
{
  printf("`test0301' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

void test0302(short int x, unsigned char y)
{
  printf("`test0302' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

void test0303(short int x, short int y)
{
  printf("`test0303' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

void test0304(short int x, unsigned short int y)
{
  printf("`test0304' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

void test0305(short int x, int y)
{
  printf("`test0305' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

void test0306(short int x, unsigned int y)
{
  printf("`test0306' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

void test0307(short int x, long int y)
{
  printf("`test0307' called\n");
  printf("%d << %ld = %d\n", x, y, x << y);
}

void test0308(short int x, unsigned long int y)
{
  printf("`test0308' called\n");
  printf("%d << %ld = %d\n", x, y, x << y);
}

void test0309(short int x, long long int y)
{
  printf("`test0309' called\n");
  printf("%d << %lld = %d\n", x, y, x << y);
}

void test0310(short int x, unsigned long long int y)
{
  printf("`test0310' called\n");
  printf("%d << %lld = %d\n", x, y, x << y);
}

void test0314(short int x, enum E y)
{
  printf("`test0314' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

void test0400(unsigned short int x, char y)
{
  printf("`test0400' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

void test0401(unsigned short int x, signed char y)
{
  printf("`test0401' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

void test0402(unsigned short int x, unsigned char y)
{
  printf("`test0402' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

void test0403(unsigned short int x, short int y)
{
  printf("`test0403' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

void test0404(unsigned short int x, unsigned short int y)
{
  printf("`test0404' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

void test0405(unsigned short int x, int y)
{
  printf("`test0405' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

void test0406(unsigned short int x, unsigned int y)
{
  printf("`test0406' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

void test0407(unsigned short int x, long int y)
{
  printf("`test0407' called\n");
  printf("%d << %ld = %d\n", x, y, x << y);
}

void test0408(unsigned short int x, unsigned long int y)
{
  printf("`test0408' called\n");
  printf("%d << %ld = %d\n", x, y, x << y);
}

void test0409(unsigned short int x, long long int y)
{
  printf("`test0409' called\n");
  printf("%d << %lld = %d\n", x, y, x << y);
}

void test0410(unsigned short int x, unsigned long long int y)
{
  printf("`test0410' called\n");
  printf("%d << %lld = %d\n", x, y, x << y);
}

void test0414(unsigned short int x, enum E y)
{
  printf("`test0414' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

void test0500(int x, char y)
{
  printf("`test0500' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

void test0501(int x, signed char y)
{
  printf("`test0501' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

void test0502(int x, unsigned char y)
{
  printf("`test0502' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

void test0503(int x, short int y)
{
  printf("`test0503' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

void test0504(int x, unsigned short int y)
{
  printf("`test0504' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

void test0505(int x, int y)
{
  printf("`test0505' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

void test0506(int x, unsigned int y)
{
  printf("`test0506' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

void test0507(int x, long int y)
{
  printf("`test0507' called\n");
  printf("%d << %ld = %d\n", x, y, x << y);
}

void test0508(int x, unsigned long int y)
{
  printf("`test0508' called\n");
  printf("%d << %ld = %d\n", x, y, x << y);
}

void test0509(int x, long long int y)
{
  printf("`test0509' called\n");
  printf("%d << %lld = %d\n", x, y, x << y);
}

void test0510(int x, unsigned long long int y)
{
  printf("`test0510' called\n");
  printf("%d << %lld = %d\n", x, y, x << y);
}

void test0514(int x, enum E y)
{
  printf("`test0514' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

void test0600(unsigned int x, char y)
{
  printf("`test0600' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

void test0601(unsigned int x, signed char y)
{
  printf("`test0601' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

void test0602(unsigned int x, unsigned char y)
{
  printf("`test0602' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

void test0603(unsigned int x, short int y)
{
  printf("`test0603' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

void test0604(unsigned int x, unsigned short int y)
{
  printf("`test0604' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

void test0605(unsigned int x, int y)
{
  printf("`test0605' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

void test0606(unsigned int x, unsigned int y)
{
  printf("`test0606' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

void test0607(unsigned int x, long int y)
{
  printf("`test0607' called\n");
  printf("%d << %ld = %d\n", x, y, x << y);
}

void test0608(unsigned int x, unsigned long int y)
{
  printf("`test0608' called\n");
  printf("%d << %ld = %d\n", x, y, x << y);
}

void test0609(unsigned int x, long long int y)
{
  printf("`test0609' called\n");
  printf("%d << %lld = %d\n", x, y, x << y);
}

void test0610(unsigned int x, unsigned long long int y)
{
  printf("`test0610' called\n");
  printf("%d << %lld = %d\n", x, y, x << y);
}

void test0614(unsigned int x, enum E y)
{
  printf("`test0614' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}


void test0700(long int x, char y)
{
  printf("`test0700' called\n");
  printf("%ld << %d = %ld\n", x, y, x << y);
}

void test0701(long int x, signed char y)
{
  printf("`test0701' called\n");
  printf("%ld << %d = %ld\n", x, y, x << y);
}

void test0702(long int x, unsigned char y)
{
  printf("`test0702' called\n");
  printf("%ld << %d = %ld\n", x, y, x << y);
}

void test0703(long int x, short int y)
{
  printf("`test0703' called\n");
  printf("%ld << %d = %ld\n", x, y, x << y);
}

void test0704(long int x, unsigned short int y)
{
  printf("`test0704' called\n");
  printf("%ld << %d = %ld\n", x, y, x << y);
}

void test0705(long int x, int y)
{
  printf("`test0705' called\n");
  printf("%ld << %d = %ld\n", x, y, x << y);
}

void test0706(long int x, unsigned int y)
{
  printf("`test0706' called\n");
  printf("%ld << %d = %ld\n", x, y, x << y);
}

void test0707(long int x, long int y)
{
  printf("`test0707' called\n");
  printf("%ld << %ld = %ld\n", x, y, x << y);
}

void test0708(long int x, unsigned long int y)
{
  printf("`test0708' called\n");
  printf("%ld << %ld = %ld\n", x, y, x << y);
}

void test0709(long int x, long long int y)
{
  printf("`test0709' called\n");
  printf("%ld << %lld = %ld\n", x, y, x << y);
}

void test0710(long int x, unsigned long long int y)
{
  printf("`test0710' called\n");
  printf("%ld << %lld = %ld\n", x, y, x << y);
}

void test0714(long int x, enum E y)
{
  printf("`test0714' called\n");
  printf("%ld << %d = %ld\n", x, y, x << y);
}

void test0800(unsigned long int x, char y)
{
  printf("`test0800' called\n");
  printf("%ld << %d = %ld\n", x, y, x << y);
}

void test0801(unsigned long int x, signed char y)
{
  printf("`test0801' called\n");
  printf("%ld << %d = %ld\n", x, y, x << y);
}

void test0802(unsigned long int x, unsigned char y)
{
  printf("`test0802' called\n");
  printf("%ld << %d = %ld\n", x, y, x << y);
}

void test0803(unsigned long int x, short int y)
{
  printf("`test0803' called\n");
  printf("%ld << %d = %ld\n", x, y, x << y);
}

void test0804(unsigned long int x, unsigned short int y)
{
  printf("`test0804' called\n");
  printf("%ld << %d = %ld\n", x, y, x << y);
}

void test0805(unsigned long int x, int y)
{
  printf("`test0805' called\n");
  printf("%ld << %d = %ld\n", x, y, x << y);
}

void test0806(unsigned long int x, unsigned int y)
{
  printf("`test0806' called\n");
  printf("%ld << %d = %ld\n", x, y, x << y);
}

void test0807(unsigned long int x, long int y)
{
  printf("`test0807' called\n");
  printf("%ld << %ld = %ld\n", x, y, x << y);
}

void test0808(unsigned long int x, unsigned long int y)
{
  printf("`test0808' called\n");
  printf("%ld << %ld = %ld\n", x, y, x << y);
}

void test0809(unsigned long int x, long long int y)
{
  printf("`test0809' called\n");
  printf("%ld << %lld = %ld\n", x, y, x << y);
}

void test0810(unsigned long int x, unsigned long long int y)
{
  printf("`test0810' called\n");
  printf("%ld << %lld = %ld\n", x, y, x << y);
}

void test0814(unsigned long int x, enum E y)
{
  printf("`test0814' called\n");
  printf("%ld << %d = %ld\n", x, y, x << y);
}

void test0900(long long int x, char y)
{
  printf("`test0900' called\n");
  printf("%lld << %d = %lld\n", x, y, x << y);
}

void test0901(long long int x, signed char y)
{
  printf("`test0901' called\n");
  printf("%lld << %d = %lld\n", x, y, x << y);
}

void test0902(long long int x, unsigned char y)
{
  printf("`test0902' called\n");
  printf("%lld << %d = %lld\n", x, y, x << y);
}

void test0903(long long int x, short int y)
{
  printf("`test0903' called\n");
  printf("%lld << %d = %lld\n", x, y, x << y);
}

void test0904(long long int x, unsigned short int y)
{
  printf("`test0904' called\n");
  printf("%lld << %d = %lld\n", x, y, x << y);
}

void test0905(long long int x, int y)
{
  printf("`test0905' called\n");
  printf("%lld << %d = %lld\n", x, y, x << y);
}

void test0906(long long int x, unsigned int y)
{
  printf("`test0906' called\n");
  printf("%lld << %d = %lld\n", x, y, x << y);
}

void test0907(long long int x, long int y)
{
  printf("`test0907' called\n");
  printf("%lld << %ld = %lld\n", x, y, x << y);
}

void test0908(long long int x, unsigned long int y)
{
  printf("`test0908' called\n");
  printf("%lld << %ld = %lld\n", x, y, x << y);
}

void test0909(long long int x, long long int y)
{
  printf("`test0909' called\n");
  printf("%lld << %lld = %lld\n", x, y, x << y);
}

void test0910(long long int x, unsigned long long int y)
{
  printf("`test0910' called\n");
  printf("%lld << %lld = %lld\n", x, y, x << y);
}

void test0914(long long int x, enum E y)
{
  printf("`test0914' called\n");
  printf("%lld << %d = %lld\n", x, y, x << y);
}

void test1000(unsigned long long int x, char y)
{
  printf("`test1000' called\n");
  printf("%lld << %d = %lld\n", x, y, x << y);
}

void test1001(unsigned long long int x, signed char y)
{
  printf("`test1001' called\n");
  printf("%lld << %d = %lld\n", x, y, x << y);
}

void test1002(unsigned long long int x, unsigned char y)
{
  printf("`test1002' called\n");
  printf("%lld << %d = %lld\n", x, y, x << y);
}

void test1003(unsigned long long int x, short int y)
{
  printf("`test1003' called\n");
  printf("%lld << %d = %lld\n", x, y, x << y);
}

void test1004(unsigned long long int x, unsigned short int y)
{
  printf("`test1004' called\n");
  printf("%lld << %d = %lld\n", x, y, x << y);
}

void test1005(unsigned long long int x, int y)
{
  printf("`test1005' called\n");
  printf("%lld << %d = %lld\n", x, y, x << y);
}

void test1006(unsigned long long int x, unsigned int y)
{
  printf("`test1006' called\n");
  printf("%lld << %d = %lld\n", x, y, x << y);
}

void test1007(unsigned long long int x, long int y)
{
  printf("`test1007' called\n");
  printf("%lld << %ld = %lld\n", x, y, x << y);
}

void test1008(unsigned long long int x, unsigned long int y)
{
  printf("`test1008' called\n");
  printf("%lld << %ld = %lld\n", x, y, x << y);
}

void test1009(unsigned long long int x, long long int y)
{
  printf("`test1009' called\n");
  printf("%lld << %lld = %lld\n", x, y, x << y);
}

void test1010(unsigned long long int x, unsigned long long int y)
{
  printf("`test1010' called\n");
  printf("%lld << %lld = %lld\n", x, y, x << y);
}

void test1014(unsigned long long int x, enum E y)
{
  printf("`test1014' called\n");
  printf("%lld << %d = %lld\n", x, y, x << y);
}

void test1400(enum E x, char y)
{
  printf("`test1400' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

void test1401(enum E x, signed char y)
{
  printf("`test1401' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

void test1402(enum E x, unsigned char y)
{
  printf("`test1402' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

void test1403(enum E x, short int y)
{
  printf("`test1403' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

void test1404(enum E x, unsigned short int y)
{
  printf("`test1404' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

void test1405(enum E x, int y)
{
  printf("`test1405' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

void test1406(enum E x, unsigned int y)
{
  printf("`test1406' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

void test1407(enum E x, long int y)
{
  printf("`test1407' called\n");
  printf("%d << %ld = %d\n", x, y, x << y);
}

void test1408(enum E x, unsigned long int y)
{
  printf("`test1408' called\n");
  printf("%d << %ld = %d\n", x, y, x << y);
}

void test1409(enum E x, long long int y)
{
  printf("`test1409' called\n");
  printf("%d << %lld = %d\n", x, y, x << y);
}

void test1410(enum E x, unsigned long long int y)
{
  printf("`test1410' called\n");
  printf("%d << %lld = %d\n", x, y, x << y);
}

void test1414(enum E x, enum E y)
{
  printf("`test1414' called\n");
  printf("%d << %d = %d\n", x, y, x << y);
}

int main(void)
{
  test0000(1,2);
  test0001(3,4);
  test0002(5,6);
  test0003(7,8);
  test0004(-1,10);
  test0005(-3,2);
  test0006(-5,4);
  test0007(-7,6);
  test0008(1,8);
  test0009(3,10);
  test0010(5,2);
  test0014(7,4);

  test0100(-1,6);
  test0101(-3,8);
  test0102(-5,10);
  test0103(-7,2);
  test0104(1,4);
  test0105(3,6);
  test0106(5,8);
  test0107(7,10);
  test0108(-1,2);
  test0109(-3,4);
  test0110(-5,6);
  test0114(-7,8);

  test0200(1,10);
  test0201(3,2);
  test0202(5,4);
  test0203(7,6);
  test0204(-1,8);
  test0205(-3,10);
  test0206(-5,2);
  test0207(-7,4);
  test0208(1,6);
  test0209(3,8);
  test0210(5,10);
  test0214(7,2);

  test0300(-1,4);
  test0301(-3,6);
  test0302(-5,8);
  test0303(-7,10);
  test0304(1,2);
  test0305(3,4);
  test0306(5,6);
  test0307(7,8);
  test0308(-1,10);
  test0309(-3,2);
  test0310(-5,4);
  test0314(-7,6);

  test0400(1,8);
  test0401(3,10);
  test0402(5,2);
  test0403(7,4);
  test0404(-1,6);
  test0405(-3,8);
  test0406(-5,10);
  test0407(-7,2);
  test0408(1,4);
  test0409(3,6);
  test0410(5,8);
  test0414(7,10);

  test0500(-1,2);
  test0501(-3,4);
  test0502(-5,6);
  test0503(-7,8);
  test0504(1,10);
  test0505(3,2);
  test0506(5,4);
  test0507(7,6);
  test0508(-1,8);
  test0509(-3,10);
  test0510(-5,2);
  test0514(-7,4);

  test0600(1,6);
  test0601(3,8);
  test0602(5,10);
  test0603(7,2);
  test0604(-1,4);
  test0605(-3,6);
  test0606(-5,8);
  test0607(-7,10);
  test0608(1,2);
  test0609(3,4);
  test0610(5,6);
  test0614(7,8);

  test0700(-1,10);
  test0701(-3,2);
  test0702(-5,4);
  test0703(-7,6);
  test0704(1,8);
  test0705(3,10);
  test0706(5,2);
  test0707(7,4);
  test0708(-1,6);
  test0709(-3,8);
  test0710(-5,10);
  test0714(-7,2);

  test0800(1,2);
  test0801(3,4);
  test0802(5,6);
  test0803(7,8);
  test0804(-1,10);
  test0805(-3,4);
  test0806(-5,6);
  test0807(-7,8);
  test0808(1,10);
  test0809(3,2);
  test0810(5,4);
  test0814(7,6);

  test0900(-1,8);
  test0901(-3,10);
  test0902(-5,2);
  test0903(-7,4);
  test0904(1,6);
  test0905(3,8);
  test0906(5,10);
  test0907(7,2);
  test0908(-1,4);
  test0909(-3,6);
  test0910(-5,6);
  test0914(-5,8);

  test1000(1,10);
  test1001(3,2);
  test1002(5,4);
  test1003(7,6);
  test1004(-1,8);
  test1005(-3,10);
  test1006(-5,2);
  test1007(-7,4);
  test1008(1,6);
  test1009(3,8);
  test1010(5,10);
  test1014(7,2);

  test1400(-1,4);
  test1401(-3,6);
  test1402(-5,8);
  test1403(-7,10);
  test1404(1,2);
  test1405(3,4);
  test1406(5,6);
  test1407(7,8);
  test1408(-1,10);
  test1409(-3,2);
  test1410(-5,4);
  test1414(-7,6);

  return 0;
}
