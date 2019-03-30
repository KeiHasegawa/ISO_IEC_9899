/*
 * Check if operator `<' is recognized.
 */
#include <stdio.h>

enum E { a, b, c };

void test0000(char x, char y)
{
  printf("`test0000' called\n");
  printf("%d < %d = %d\n", x, y, x < y);
}

void test0001(char x, signed char y)
{
  printf("`test0001' called\n");
  printf("%d < %d = %d\n", x, y, x < y);
}

void test0002(char x, unsigned char y)
{
  printf("`test0002' called\n");
  printf("%d < %d = %d\n", x, y, x < y);
}

void test0003(char x, short int y)
{
  printf("`test0003' called\n");
  printf("%d < %d = %d\n", x, y, x < y);
}

void test0004(char x, unsigned short int y)
{
  printf("`test0004' called\n");
  printf("%d < %d = %d\n", x, y, x < y);
}

void test0005(char x, int y)
{
  printf("`test0005' called\n");
  printf("%d < %d = %d\n", x, y, x < y);
}

void test0006(char x, unsigned int y)
{
  printf("`test0006' called\n");
  printf("%d < %u = %d\n", x, y, x < y);
}

void test0007(char x, long int y)
{
  printf("`test0007' called\n");
  printf("%d < %ld = %d\n", x, y, x < y);
}

void test0008(char x, unsigned long int y)
{
  printf("`test0008' called\n");
  printf("%d < %lu = %d\n", x, y, x < y);
}

void test0009(char x, long long int y)
{
  printf("`test0009' called\n");
  printf("%d < %lld = %d\n", x, y, x < y);
}

void test0010(char x, unsigned long long int y)
{
  printf("`test0010' called\n");
  printf("%d < %llu = %d\n", x, y, x < y);
}

void test0011(char x, float y)
{
  printf("`test0011' called\n");
  printf("%d < %f = %d\n", x, y, x < y);
}

void test0012(char x, double y)
{
  printf("`test0012' called\n");
  printf("%d < %f = %d\n", x, y, x < y);
}

void test0013(char x, long double y)
{
  printf("`test0013' called\n");
  printf("%d < %Lf = %d\n", x, y, x < y);
}

void test0014(char x, enum E y)
{
  printf("`test0014' called\n");
  printf("%d < %d = %d\n", x, y, x < y);
}

void test0100(signed char x, char y)
{
  printf("`test0100' called\n");
  printf("%d < %d = %d\n", x, y, x < y);
}

void test0101(signed char x, signed char y)
{
  printf("`test0101' called\n");
  printf("%d < %d = %d\n", x, y, x < y);
}

void test0102(signed char x, unsigned char y)
{
  printf("`test0102' called\n");
  printf("%d < %d = %d\n", x, y, x < y);
}

void test0103(signed char x, short int y)
{
  printf("`test0103' called\n");
  printf("%d < %d = %d\n", x, y, x < y);
}

void test0104(signed char x, unsigned short int y)
{
  printf("`test0104' called\n");
  printf("%d < %d = %d\n", x, y, x < y);
}

void test0105(signed char x, int y)
{
  printf("`test0105' called\n");
  printf("%d < %d = %d\n", x, y, x < y);
}

void test0106(signed char x, unsigned int y)
{
  printf("`test0106' called\n");
  printf("%d < %u = %d\n", x, y, x < y);
}

void test0107(signed char x, long int y)
{
  printf("`test0107' called\n");
  printf("%d < %ld = %d\n", x, y, x < y);
}

void test0108(signed char x, unsigned long int y)
{
  printf("`test0108' called\n");
  printf("%d < %lu = %d\n", x, y, x < y);
}

void test0109(signed char x, long long int y)
{
  printf("`test0109' called\n");
  printf("%d < %lld = %d\n", x, y, x < y);
}

void test0110(signed char x, unsigned long long int y)
{
  printf("`test0110' called\n");
  printf("%d < %llu = %d\n", x, y, x < y);
}

void test0111(signed char x, float y)
{
  printf("`test0111' called\n");
  printf("%d < %f = %d\n", x, y, x < y);
}

void test0112(signed char x, double y)
{
  printf("`test0112' called\n");
  printf("%d < %f = %d\n", x, y, x < y);
}

void test0113(signed char x, long double y)
{
  printf("`test0113' called\n");
  printf("%d < %Lf = %d\n", x, y, x < y);
}

void test0114(signed char x, enum E y)
{
  printf("`test0114' called\n");
  printf("%d < %d = %d\n", x, y, x < y);
}


void test0200(unsigned char x, char y)
{
  printf("`test0200' called\n");
  printf("%d < %d = %d\n", x, y, x < y);
}

void test0201(unsigned char x, signed char y)
{
  printf("`test0201' called\n");
  printf("%d < %d = %d\n", x, y, x < y);
}

void test0202(unsigned char x, unsigned char y)
{
  printf("`test0202' called\n");
  printf("%d < %d = %d\n", x, y, x < y);
}

void test0203(unsigned char x, short int y)
{
  printf("`test0203' called\n");
  printf("%d < %d = %d\n", x, y, x < y);
}

void test0204(unsigned char x, unsigned short int y)
{
  printf("`test0204' called\n");
  printf("%d < %d = %d\n", x, y, x < y);
}

void test0205(unsigned char x, int y)
{
  printf("`test0205' called\n");
  printf("%d < %d = %d\n", x, y, x < y);
}

void test0206(unsigned char x, unsigned int y)
{
  printf("`test0206' called\n");
  printf("%d < %u = %d\n", x, y, x < y);
}

void test0207(unsigned char x, long int y)
{
  printf("`test0207' called\n");
  printf("%d < %ld = %d\n", x, y, x < y);
}

void test0208(unsigned char x, unsigned long int y)
{
  printf("`test0208' called\n");
  printf("%d < %lu = %d\n", x, y, x < y);
}

void test0209(unsigned char x, long long int y)
{
  printf("`test0209' called\n");
  printf("%d < %lld = %d\n", x, y, x < y);
}

void test0210(unsigned char x, unsigned long long int y)
{
  printf("`test0210' called\n");
  printf("%d < %llu = %d\n", x, y, x < y);
}

void test0211(unsigned char x, float y)
{
  printf("`test0211' called\n");
  printf("%d < %f = %d\n", x, y, x < y);
}

void test0212(unsigned char x, double y)
{
  printf("`test0212' called\n");
  printf("%d < %f = %d\n", x, y, x < y);
}

void test0213(unsigned char x, long double y)
{
  printf("`test0213' called\n");
  printf("%d < %Lf = %d\n", x, y, x < y);
}

void test0214(unsigned char x, enum E y)
{
  printf("`test0214' called\n");
  printf("%d < %d = %d\n", x, y, x < y);
}

void test0300(short int x, char y)
{
  printf("`test0300' called\n");
  printf("%d < %d = %d\n", x, y, x < y);
}

void test0301(short int x, signed char y)
{
  printf("`test0301' called\n");
  printf("%d < %d = %d\n", x, y, x < y);
}

void test0302(short int x, unsigned char y)
{
  printf("`test0302' called\n");
  printf("%d < %d = %d\n", x, y, x < y);
}

void test0303(short int x, short int y)
{
  printf("`test0303' called\n");
  printf("%d < %d = %d\n", x, y, x < y);
}

void test0304(short int x, unsigned short int y)
{
  printf("`test0304' called\n");
  printf("%d < %d = %d\n", x, y, x < y);
}

void test0305(short int x, int y)
{
  printf("`test0305' called\n");
  printf("%d < %d = %d\n", x, y, x < y);
}

void test0306(short int x, unsigned int y)
{
  printf("`test0306' called\n");
  printf("%d < %u = %d\n", x, y, x < y);
}

void test0307(short int x, long int y)
{
  printf("`test0307' called\n");
  printf("%d < %ld = %d\n", x, y, x < y);
}

void test0308(short int x, unsigned long int y)
{
  printf("`test0308' called\n");
  printf("%d < %lu = %d\n", x, y, x < y);
}

void test0309(short int x, long long int y)
{
  printf("`test0309' called\n");
  printf("%d < %lld = %d\n", x, y, x < y);
}

void test0310(short int x, unsigned long long int y)
{
  printf("`test0310' called\n");
  printf("%d < %llu = %d\n", x, y, x < y);
}

void test0311(short int x, float y)
{
  printf("`test0311' called\n");
  printf("%d < %f = %d\n", x, y, x < y);
}

void test0312(short int x, double y)
{
  printf("`test0312' called\n");
  printf("%d < %f = %d\n", x, y, x < y);
}

void test0313(short int x, long double y)
{
  printf("`test0313' called\n");
  printf("%d < %Lf = %d\n", x, y, x < y);
}

void test0314(short int x, enum E y)
{
  printf("`test0314' called\n");
  printf("%d < %d = %d\n", x, y, x < y);
}


void test0400(unsigned short int x, char y)
{
  printf("`test0400' called\n");
  printf("%d < %d = %d\n", x, y, x < y);
}

void test0401(unsigned short int x, signed char y)
{
  printf("`test0401' called\n");
  printf("%d < %d = %d\n", x, y, x < y);
}

void test0402(unsigned short int x, unsigned char y)
{
  printf("`test0402' called\n");
  printf("%d < %d = %d\n", x, y, x < y);
}

void test0403(unsigned short int x, short int y)
{
  printf("`test0403' called\n");
  printf("%d < %d = %d\n", x, y, x < y);
}

void test0404(unsigned short int x, unsigned short int y)
{
  printf("`test0404' called\n");
  printf("%d < %d = %d\n", x, y, x < y);
}

void test0405(unsigned short int x, int y)
{
  printf("`test0405' called\n");
  printf("%d < %d = %d\n", x, y, x < y);
}

void test0406(unsigned short int x, unsigned int y)
{
  printf("`test0406' called\n");
  printf("%d < %u = %d\n", x, y, x < y);
}

void test0407(unsigned short int x, long int y)
{
  printf("`test0407' called\n");
  printf("%d < %ld = %d\n", x, y, x < y);
}

void test0408(unsigned short int x, unsigned long int y)
{
  printf("`test0408' called\n");
  printf("%d < %lu = %d\n", x, y, x < y);
}

void test0409(unsigned short int x, long long int y)
{
  printf("`test0409' called\n");
  printf("%d < %lld = %d\n", x, y, x < y);
}

void test0410(unsigned short int x, unsigned long long int y)
{
  printf("`test0410' called\n");
  printf("%d < %llu = %d\n", x, y, x < y);
}

void test0411(unsigned short int x, float y)
{
  printf("`test0411' called\n");
  printf("%d < %f = %d\n", x, y, x < y);
}

void test0412(unsigned short int x, double y)
{
  printf("`test0412' called\n");
  printf("%d < %f = %d\n", x, y, x < y);
}

void test0413(unsigned short int x, long double y)
{
  printf("`test0413' called\n");
  printf("%d < %Lf = %d\n", x, y, x < y);
}

void test0414(unsigned short int x, enum E y)
{
  printf("`test0414' called\n");
  printf("%d < %d = %d\n", x, y, x < y);
}

void test0500(int x, char y)
{
  printf("`test0500' called\n");
  printf("%d < %d = %d\n", x, y, x < y);
}

void test0501(int x, signed char y)
{
  printf("`test0501' called\n");
  printf("%d < %d = %d\n", x, y, x < y);
}

void test0502(int x, unsigned char y)
{
  printf("`test0502' called\n");
  printf("%d < %d = %d\n", x, y, x < y);
}

void test0503(int x, short int y)
{
  printf("`test0503' called\n");
  printf("%d < %d = %d\n", x, y, x < y);
}

void test0504(int x, unsigned short int y)
{
  printf("`test0504' called\n");
  printf("%d < %d = %d\n", x, y, x < y);
}

void test0505(int x, int y)
{
  printf("`test0505' called\n");
  printf("%d < %d = %d\n", x, y, x < y);
}

void test0506(int x, unsigned int y)
{
  printf("`test0506' called\n");
  printf("%d < %u = %d\n", x, y, x < y);
}

void test0507(int x, long int y)
{
  printf("`test0507' called\n");
  printf("%d < %ld = %d\n", x, y, x < y);
}

void test0508(int x, unsigned long int y)
{
  printf("`test0508' called\n");
  printf("%d < %lu = %d\n", x, y, x < y);
}

void test0509(int x, long long int y)
{
  printf("`test0509' called\n");
  printf("%d < %lld = %d\n", x, y, x < y);
}

void test0510(int x, unsigned long long int y)
{
  printf("`test0510' called\n");
  printf("%d < %llu = %d\n", x, y, x < y);
}

void test0511(int x, float y)
{
  printf("`test0511' called\n");
  printf("%d < %f = %d\n", x, y, x < y);
}

void test0512(int x, double y)
{
  printf("`test0512' called\n");
  printf("%d < %f = %d\n", x, y, x < y);
}

void test0513(int x, long double y)
{
  printf("`test0513' called\n");
  printf("%d < %Lf = %d\n", x, y, x < y);
}

void test0514(int x, enum E y)
{
  printf("`test0514' called\n");
  printf("%d < %d = %d\n", x, y, x < y);
}

void test0600(unsigned int x, char y)
{
  printf("`test0600' called\n");
  printf("%u < %d = %d\n", x, y, x < y);
}

void test0601(unsigned int x, signed char y)
{
  printf("`test0601' called\n");
  printf("%u < %d = %d\n", x, y, x < y);
}

void test0602(unsigned int x, unsigned char y)
{
  printf("`test0602' called\n");
  printf("%u < %d = %d\n", x, y, x < y);
}

void test0603(unsigned int x, short int y)
{
  printf("`test0603' called\n");
  printf("%u < %d = %d\n", x, y, x < y);
}

void test0604(unsigned int x, unsigned short int y)
{
  printf("`test0604' called\n");
  printf("%u < %d = %d\n", x, y, x < y);
}

void test0605(unsigned int x, int y)
{
  printf("`test0605' called\n");
  printf("%u < %d = %d\n", x, y, x < y);
}

void test0606(unsigned int x, unsigned int y)
{
  printf("`test0606' called\n");
  printf("%u < %u = %d\n", x, y, x < y);
}

void test0607(unsigned int x, long int y)
{
  printf("`test0607' called\n");
  printf("%u < %ld = %d\n", x, y, x < y);
}

void test0608(unsigned int x, unsigned long int y)
{
  printf("`test0608' called\n");
  printf("%u < %lu = %d\n", x, y, x < y);
}

void test0609(unsigned int x, long long int y)
{
  printf("`test0609' called\n");
  printf("%u < %lld = %d\n", x, y, x < y);
}

void test0610(unsigned int x, unsigned long long int y)
{
  printf("`test0610' called\n");
  printf("%u < %llu = %d\n", x, y, x < y);
}

void test0611(unsigned int x, float y)
{
  printf("`test0611' called\n");
  printf("%u < %f = %d\n", x, y, x < y);
}

void test0612(unsigned int x, double y)
{
  printf("`test0612' called\n");
  printf("%u < %f = %d\n", x, y, x < y);
}

void test0613(unsigned int x, long double y)
{
  printf("`test0613' called\n");
  printf("%u < %Lf = %d\n", x, y, x < y);
}

void test0614(unsigned int x, enum E y)
{
  printf("`test0614' called\n");
  printf("%u < %d = %d\n", x, y, x < y);
}


void test0700(long int x, char y)
{
  printf("`test0700' called\n");
  printf("%ld < %d = %d\n", x, y, x < y);
}

void test0701(long int x, signed char y)
{
  printf("`test0701' called\n");
  printf("%ld < %d = %d\n", x, y, x < y);
}

void test0702(long int x, unsigned char y)
{
  printf("`test0702' called\n");
  printf("%ld < %d = %d\n", x, y, x < y);
}

void test0703(long int x, short int y)
{
  printf("`test0703' called\n");
  printf("%ld < %d = %d\n", x, y, x < y);
}

void test0704(long int x, unsigned short int y)
{
  printf("`test0704' called\n");
  printf("%ld < %d = %d\n", x, y, x < y);
}

void test0705(long int x, int y)
{
  printf("`test0705' called\n");
  printf("%ld < %d = %d\n", x, y, x < y);
}

void test0706(long int x, unsigned int y)
{
  printf("`test0706' called\n");
  printf("%ld < %u = %d\n", x, y, x < y);
}

void test0707(long int x, long int y)
{
  printf("`test0707' called\n");
  printf("%ld < %ld = %d\n", x, y, x < y);
}

void test0708(long int x, unsigned long int y)
{
  printf("`test0708' called\n");
  printf("%ld < %lu = %d\n", x, y, x < y);
}

void test0709(long int x, long long int y)
{
  printf("`test0709' called\n");
  printf("%ld < %lld = %d\n", x, y, x < y);
}

void test0710(long int x, unsigned long long int y)
{
  printf("`test0710' called\n");
  printf("%ld < %llu = %d\n", x, y, x < y);
}

void test0711(long int x, float y)
{
  printf("`test0711' called\n");
  printf("%ld < %f = %d\n", x, y, x < y);
}

void test0712(long int x, double y)
{
  printf("`test0712' called\n");
  printf("%ld < %f = %d\n", x, y, x < y);
}

void test0713(long int x, long double y)
{
  printf("`test0713' called\n");
  printf("%ld < %Lf = %d\n", x, y, x < y);
}

void test0714(long int x, enum E y)
{
  printf("`test0714' called\n");
  printf("%ld < %d = %d\n", x, y, x < y);
}

void test0800(unsigned long int x, char y)
{
  printf("`test0800' called\n");
  printf("%lu < %d = %d\n", x, y, x < y);
}

void test0801(unsigned long int x, signed char y)
{
  printf("`test0801' called\n");
  printf("%lu < %d = %d\n", x, y, x < y);
}

void test0802(unsigned long int x, unsigned char y)
{
  printf("`test0802' called\n");
  printf("%lu < %d = %d\n", x, y, x < y);
}

void test0803(unsigned long int x, short int y)
{
  printf("`test0803' called\n");
  printf("%lu < %d = %d\n", x, y, x < y);
}

void test0804(unsigned long int x, unsigned short int y)
{
  printf("`test0804' called\n");
  printf("%lu < %d = %d\n", x, y, x < y);
}

void test0805(unsigned long int x, int y)
{
  printf("`test0805' called\n");
  printf("%lu < %d = %d\n", x, y, x < y);
}

void test0806(unsigned long int x, unsigned int y)
{
  printf("`test0806' called\n");
  printf("%lu < %u = %d\n", x, y, x < y);
}

void test0807(unsigned long int x, long int y)
{
  printf("`test0807' called\n");
  printf("%lu < %ld = %d\n", x, y, x < y);
}

void test0808(unsigned long int x, unsigned long int y)
{
  printf("`test0808' called\n");
  printf("%lu < %lu = %d\n", x, y, x < y);
}

void test0809(unsigned long int x, long long int y)
{
  printf("`test0809' called\n");
  printf("%lu < %lld = %d\n", x, y, x < y);
}

void test0810(unsigned long int x, unsigned long long int y)
{
  printf("`test0810' called\n");
  printf("%lu < %llu = %d\n", x, y, x < y);
}

void test0811(unsigned long int x, float y)
{
  printf("`test0811' called\n");
  printf("%lu < %f = %d\n", x, y, x < y);
}

void test0812(unsigned long int x, double y)
{
  printf("`test0812' called\n");
  printf("%lu < %f = %d\n", x, y, x < y);
}

void test0813(unsigned long int x, long double y)
{
  printf("`test0813' called\n");
  printf("%lu < %Lf = %d\n", x, y, x < y);
}

void test0814(unsigned long int x, enum E y)
{
  printf("`test0814' called\n");
  printf("%lu < %d = %d\n", x, y, x < y);
}

void test0900(long long int x, char y)
{
  printf("`test0900' called\n");
  printf("%lld < %d = %d\n", x, y, x < y);
}

void test0901(long long int x, signed char y)
{
  printf("`test0901' called\n");
  printf("%lld < %d = %d\n", x, y, x < y);
}

void test0902(long long int x, unsigned char y)
{
  printf("`test0902' called\n");
  printf("%lld < %d = %d\n", x, y, x < y);
}

void test0903(long long int x, short int y)
{
  printf("`test0903' called\n");
  printf("%lld < %d = %d\n", x, y, x < y);
}

void test0904(long long int x, unsigned short int y)
{
  printf("`test0904' called\n");
  printf("%lld < %d = %d\n", x, y, x < y);
}

void test0905(long long int x, int y)
{
  printf("`test0905' called\n");
  printf("%lld < %d = %d\n", x, y, x < y);
}

void test0906(long long int x, unsigned int y)
{
  printf("`test0906' called\n");
  printf("%lld < %u = %d\n", x, y, x < y);
}

void test0907(long long int x, long int y)
{
  printf("`test0907' called\n");
  printf("%lld < %ld = %d\n", x, y, x < y);
}

void test0908(long long int x, unsigned long int y)
{
  printf("`test0908' called\n");
  printf("%lld < %lu = %d\n", x, y, x < y);
}

void test0909(long long int x, long long int y)
{
  printf("`test0909' called\n");
  printf("%lld < %lld = %d\n", x, y, x < y);
}

void test0910(long long int x, unsigned long long int y)
{
  printf("`test0910' called\n");
  printf("%lld < %llu = %d\n", x, y, x < y);
}

void test0911(long long int x, float y)
{
  printf("`test0911' called\n");
  printf("%lld < %f = %d\n", x, y, x < y);
}

void test0912(long long int x, double y)
{
  printf("`test0912' called\n");
  printf("%lld < %f = %d\n", x, y, x < y);
}

void test0913(long long int x, long double y)
{
  printf("`test0913' called\n");
  printf("%lld < %Lf = %d\n", x, y, x < y);
}

void test0914(long long int x, enum E y)
{
  printf("`test0914' called\n");
  printf("%lld < %d = %d\n", x, y, x < y);
}


void test1000(unsigned long long int x, char y)
{
  printf("`test1000' called\n");
  printf("%llu < %d = %d\n", x, y, x < y);
}

void test1001(unsigned long long int x, signed char y)
{
  printf("`test1001' called\n");
  printf("%llu < %d = %d\n", x, y, x < y);
}

void test1002(unsigned long long int x, unsigned char y)
{
  printf("`test1002' called\n");
  printf("%llu < %d = %d\n", x, y, x < y);
}

void test1003(unsigned long long int x, short int y)
{
  printf("`test1003' called\n");
  printf("%llu < %d = %d\n", x, y, x < y);
}

void test1004(unsigned long long int x, unsigned short int y)
{
  printf("`test1004' called\n");
  printf("%llu < %d = %d\n", x, y, x < y);
}

void test1005(unsigned long long int x, int y)
{
  printf("`test1005' called\n");
  printf("%llu < %d = %d\n", x, y, x < y);
}

void test1006(unsigned long long int x, unsigned int y)
{
  printf("`test1006' called\n");
  printf("%llu < %u = %d\n", x, y, x < y);
}

void test1007(unsigned long long int x, long int y)
{
  printf("`test1007' called\n");
  printf("%llu < %ld = %d\n", x, y, x < y);
}

void test1008(unsigned long long int x, unsigned long int y)
{
  printf("`test1008' called\n");
  printf("%llu < %lu = %d\n", x, y, x < y);
}

void test1009(unsigned long long int x, long long int y)
{
  printf("`test1009' called\n");
  printf("%llu < %lld = %d\n", x, y, x < y);
}

void test1010(unsigned long long int x, unsigned long long int y)
{
  printf("`test1010' called\n");
  printf("%llu < %lld = %d\n", x, y, x < y);
}

void test1011(unsigned long long int x, float y)
{
  printf("`test1011' called\n");
  printf("%llu < %f = %d\n", x, y, x < y);
}

void test1012(unsigned long long int x, double y)
{
  printf("`test1012' called\n");
  printf("%llu < %f = %d\n", x, y, x < y);
}

void test1013(unsigned long long int x, long double y)
{
  printf("`test1013' called\n");
  printf("%llu < %Lf = %d\n", x, y, x < y);
}

void test1014(unsigned long long int x, enum E y)
{
  printf("`test1014' called\n");
  printf("%llu < %d = %d\n", x, y, x < y);
}

void test1100(float x, char y)
{
  printf("`test1100' called\n");
  printf("%f < %d = %d\n", x, y, x < y);
}

void test1101(float x, signed char y)
{
  printf("`test1101' called\n");
  printf("%f < %d = %d\n", x, y, x < y);
}

void test1102(float x, unsigned char y)
{
  printf("`test1102' called\n");
  printf("%f < %d = %d\n", x, y, x < y);
}

void test1103(float x, short int y)
{
  printf("`test1103' called\n");
  printf("%f < %d = %d\n", x, y, x < y);
}

void test1104(float x, unsigned short int y)
{
  printf("`test1104' called\n");
  printf("%f < %d = %d\n", x, y, x < y);
}

void test1105(float x, int y)
{
  printf("`test1105' called\n");
  printf("%f < %d = %d\n", x, y, x < y);
}

void test1106(float x, unsigned int y)
{
  printf("`test1106' called\n");
  printf("%f < %u = %d\n", x, y, x < y);
}

void test1107(float x, long int y)
{
  printf("`test1107' called\n");
  printf("%f < %ld = %d\n", x, y, x < y);
}

void test1108(float x, unsigned long int y)
{
  printf("`test1108' called\n");
  printf("%f < %lu = %d\n", x, y, x < y);
}

void test1109(float x, long long int y)
{
  printf("`test1109' called\n");
  printf("%f < %lld = %d\n", x, y, x < y);
}

void test1110(float x, unsigned long long int y)
{
  printf("`test1110' called\n");
  printf("%f < %llu = %d\n", x, y, x < y);
}

void test1111(float x, float y)
{
  printf("`test1111' called\n");
  printf("%f < %f = %d\n", x, y, x < y);
}

void test1112(float x, double y)
{
  printf("`test1112' called\n");
  printf("%f < %f = %d\n", x, y, x < y);
}

void test1113(float x, long double y)
{
  printf("`test1113' called\n");
  printf("%f < %Lf = %d\n", x, y, x < y);
}

void test1114(float x, enum E y)
{
  printf("`test1114' called\n");
  printf("%f < %d = %d\n", x, y, x < y);
}

void test1200(double x, char y)
{
  printf("`test1200' called\n");
  printf("%f < %d = %d\n", x, y, x < y);
}

void test1201(double x, signed char y)
{
  printf("`test1201' called\n");
  printf("%f < %d = %d\n", x, y, x < y);
}

void test1202(double x, unsigned char y)
{
  printf("`test1202' called\n");
  printf("%f < %d = %d\n", x, y, x < y);
}

void test1203(double x, short int y)
{
  printf("`test1203' called\n");
  printf("%f < %d = %d\n", x, y, x < y);
}

void test1204(double x, unsigned short int y)
{
  printf("`test1204' called\n");
  printf("%f < %d = %d\n", x, y, x < y);
}

void test1205(double x, int y)
{
  printf("`test1205' called\n");
  printf("%f < %d = %d\n", x, y, x < y);
}

void test1206(double x, unsigned int y)
{
  printf("`test1206' called\n");
  printf("%f < %u = %d\n", x, y, x < y);
}

void test1207(double x, long int y)
{
  printf("`test1207' called\n");
  printf("%f < %ld = %d\n", x, y, x < y);
}

void test1208(double x, unsigned long int y)
{
  printf("`test1208' called\n");
  printf("%f < %lu = %d\n", x, y, x < y);
}

void test1209(double x, long long int y)
{
  printf("`test1209' called\n");
  printf("%f < %lld = %d\n", x, y, x < y);
}

void test1210(double x, unsigned long long int y)
{
  printf("`test1210' called\n");
  printf("%f < %llu = %d\n", x, y, x < y);
}

void test1211(double x, float y)
{
  printf("`test1211' called\n");
  printf("%f < %f = %d\n", x, y, x < y);
}

void test1212(double x, double y)
{
  printf("`test1212' called\n");
  printf("%f < %f = %d\n", x, y, x < y);
}

void test1213(double x, long double y)
{
  printf("`test1213' called\n");
  printf("%f < %Lf = %d\n", x, y, x < y);
}

void test1214(double x, enum E y)
{
  printf("`test1214' called\n");
  printf("%f < %d = %d\n", x, y, x < y);
}

void test1300(long double x, char y)
{
  printf("`test1300' called\n");
  printf("%Lf < %d = %d\n", x, y, x < y);
}

void test1301(long double x, signed char y)
{
  printf("`test1301' called\n");
  printf("%Lf < %d = %d\n", x, y, x < y);
}

void test1302(long double x, unsigned char y)
{
  printf("`test1302' called\n");
  printf("%Lf < %d = %d\n", x, y, x < y);
}

void test1303(long double x, short int y)
{
  printf("`test1303' called\n");
  printf("%Lf < %d = %d\n", x, y, x < y);
}

void test1304(long double x, unsigned short int y)
{
  printf("`test1304' called\n");
  printf("%Lf < %d = %d\n", x, y, x < y);
}

void test1305(long double x, int y)
{
  printf("`test1305' called\n");
  printf("%Lf < %d = %d\n", x, y, x < y);
}

void test1306(long double x, unsigned int y)
{
  printf("`test1306' called\n");
  printf("%Lf < %u = %d\n", x, y, x < y);
}

void test1307(long double x, long int y)
{
  printf("`test1307' called\n");
  printf("%Lf < %ld = %d\n", x, y, x < y);
}

void test1308(long double x, unsigned long int y)
{
  printf("`test1308' called\n");
  printf("%Lf < %lu = %d\n", x, y, x < y);
}

void test1309(long double x, long long int y)
{
  printf("`test1309' called\n");
  printf("%Lf < %lld = %d\n", x, y, x < y);
}

void test1310(long double x, unsigned long long int y)
{
  printf("`test1310' called\n");
  printf("%Lf < %llu = %d\n", x, y, x < y);
}

void test1311(long double x, float y)
{
  printf("`test1311' called\n");
  printf("%Lf < %f = %d\n", x, y, x < y);
}

void test1312(long double x, double y)
{
  printf("`test1312' called\n");
  printf("%Lf < %f = %d\n", x, y, x < y);
}

void test1313(long double x, long double y)
{
  printf("`test1313' called\n");
  printf("%Lf < %Lf = %d\n", x, y, x < y);
}

void test1314(long double x, enum E y)
{
  printf("`test1314' called\n");
  printf("%Lf < %d = %d\n", x, y, x < y);
}


void test1400(enum E x, char y)
{
  printf("`test1400' called\n");
  printf("%d < %d = %d\n", x, y, x < y);
}

void test1401(enum E x, signed char y)
{
  printf("`test1401' called\n");
  printf("%d < %d = %d\n", x, y, x < y);
}

void test1402(enum E x, unsigned char y)
{
  printf("`test1402' called\n");
  printf("%d < %d = %d\n", x, y, x < y);
}

void test1403(enum E x, short int y)
{
  printf("`test1403' called\n");
  printf("%d < %d = %d\n", x, y, x < y);
}

void test1404(enum E x, unsigned short int y)
{
  printf("`test1404' called\n");
  printf("%d < %d = %d\n", x, y, x < y);
}

void test1405(enum E x, int y)
{
  printf("`test1405' called\n");
  printf("%d < %d = %d\n", x, y, x < y);
}

void test1406(enum E x, unsigned int y)
{
  printf("`test1406' called\n");
  printf("%d < %u = %d\n", x, y, x < y);
}

void test1407(enum E x, long int y)
{
  printf("`test1407' called\n");
  printf("%d < %ld = %d\n", x, y, x < y);
}

void test1408(enum E x, unsigned long int y)
{
  printf("`test1408' called\n");
  printf("%d < %lu = %d\n", x, y, x < y);
}

void test1409(enum E x, long long int y)
{
  printf("`test1409' called\n");
  printf("%d < %lld = %d\n", x, y, x < y);
}

void test1410(enum E x, unsigned long long int y)
{
  printf("`test1410' called\n");
  printf("%d < %llu = %d\n", x, y, x < y);
}

void test1411(enum E x, float y)
{
  printf("`test1411' called\n");
  printf("%d < %f = %d\n", x, y, x < y);
}

void test1412(enum E x, double y)
{
  printf("`test1412' called\n");
  printf("%d < %f = %d\n", x, y, x < y);
}

void test1413(enum E x, long double y)
{
  printf("`test1413' called\n");
  printf("%d < %Lf = %d\n", x, y, x < y);
}

void test1414(enum E x, enum E y)
{
  printf("`test1414' called\n");
  printf("%d < %d = %d\n", x, y, x < y);
}

int main(void)
{
  test0000(1,0);
  test0001(1,1);
  test0002(1,2);
  test0003(-1,-2);
  test0004(-1,-1);
  test0005(-1,0);
  test0006(1,0);
  test0007(1,1);
  test0008(1,2);
  test0009(-1,-2);
  test0010(-1,-1);
  test0011(-1,0);
  test0012(1,0);
  test0013(1,1);
  test0014(1,2);

  test0100(2,1);
  test0101(2,2);
  test0102(2,3);
  test0103(-2,-3);
  test0104(-2,-2);
  test0105(-2,-1);
  test0106(2,1);
  test0107(2,2);
  test0108(2,3);
  test0109(-2,-3);
  test0110(-2,-2);
  test0111(-2,-1);
  test0112(2,1);
  test0113(2,2);
  test0114(2,3);

  test0200(3,2);
  test0201(3,3);
  test0202(3,4);
  test0203(-3,-4);
  test0204(-3,-3);
  test0205(-3,-2);
  test0206(3,2);
  test0207(3,3);
  test0208(3,4);
  test0209(-3,-4);
  test0210(-3,-3);
  test0211(-3,-2);
  test0212(3,2);
  test0213(3,3);
  test0214(3,4);

  test0300(4,3);
  test0301(4,4);
  test0302(4,5);
  test0303(-4,-5);
  test0304(-4,-4);
  test0305(-4,-3);
  test0306(4,3);
  test0307(4,4);
  test0308(4,5);
  test0309(-4,-5);
  test0310(-4,-4);
  test0311(-4,-3);
  test0312(4,3);
  test0313(4,4);
  test0314(4,5);

  test0400(5,4);
  test0401(5,5);
  test0402(5,6);
  test0403(-5,-6);
  test0404(-5,-5);
  test0405(-5,-4);
  test0406(5,4);
  test0407(5,5);
  test0408(5,6);
  test0409(-5,-6);
  test0410(-5,-5);
  test0411(-5,-4);
  test0412(5,4);
  test0413(5,5);
  test0414(5,6);

  test0500(-6,-7);
  test0501(-6,-6);
  test0502(-6,-5);
  test0503(6,5);
  test0504(6,6);
  test0505(6,7);
  test0506(-6,-7);
  test0507(-6,-6);
  test0508(-6,-5);
  test0509(6,5);
  test0510(6,6);
  test0511(6,7);
  test0512(-6,-7);
  test0513(-6,-6);
  test0514(-6,-5);

  test0600(-7,-8);
  test0601(-7,-7);
  test0602(-7,-6);
  test0603(7,6);
  test0604(7,7);
  test0605(7,8);
  test0606(-7,-8);
  test0607(-7,-7);
  test0608(-7,-6);
  test0609(7,6);
  test0610(7,7);
  test0611(7,8);
  test0612(-7,-8);
  test0613(-7,-7);
  test0614(-7,-6);

  test0700(8,7);
  test0701(8,8);
  test0702(8,9);
  test0703(-8,-9);
  test0704(-8,-8);
  test0705(-8,-7);
  test0706(8,7);
  test0707(8,8);
  test0708(8,9);
  test0709(-8,-9);
  test0710(-8,-8);
  test0711(-8,-7);
  test0712(8,7);
  test0713(8,8);
  test0714(8,9);

  test0800(-9,-10);
  test0801(-9,-9);
  test0802(-9,-8);
  test0803(9,8);
  test0804(9,9);
  test0805(9,10);
  test0806(-9,-10);
  test0807(-9,-9);
  test0808(-9,-8);
  test0809(9,8);
  test0810(9,9);
  test0811(9,10);
  test0812(-9,-10);
  test0813(-9,-9);
  test0814(-9,-8);

  test0900(10,9);
  test0901(10,10);
  test0902(10,11);
  test0903(-10,-11);
  test0904(-10,-10);
  test0905(-10,-9);
  test0906(10,9);
  test0907(10,10);
  test0908(10,11);
  test0909(-10,-11);
  test0910(-10,-10);
  test0911(-10,-9);
  test0912(10,9);
  test0913(10,10);
  test0914(10,11);

  test1000(-11,-12);
  test1001(-11,-11);
  test1002(-11,-10);
  test1003(11,10);
  test1004(11,11);
  test1005(11,12);
  test1006(-11,-12);
  test1007(-11,-11);
  test1008(-11,-10);
  test1009(11,10);
  test1010(11,11);
  test1011(11,12);
  test1012(-11,-12);
  test1013(-11,-11);
  test1014(-11,-10);

  test1100(12,11);
  test1101(12,12);
  test1102(12,13);
  test1103(-12,-13);
  test1104(-12,-12);
  test1105(-12,-11);
  test1106(12,11);
  test1107(12,12);
  test1108(12,13);
  test1109(-12,-13);
  test1110(-12,-12);
  test1111(-12,-11);
  test1112(12,11);
  test1113(12,12);
  test1114(12,13);

  test1200(-13,-14);
  test1201(-13,-13);
  test1202(-13,-12);
  test1203(13,12);
  test1204(13,13);
  test1205(13,14);
  test1206(-13,-14);
  test1207(-13,-13);
  test1208(-13,-12);
  test1209(13,12);
  test1210(13,13);
  test1211(13,14);
  test1212(-13,-14);
  test1213(-13,-13);
  test1214(-13,-12);

  test1300(14,13);
  test1301(14,14);
  test1302(14,15);
  test1303(-14,-15);
  test1304(-14,-14);
  test1305(-14,-13);
  test1306(14,13);
  test1307(14,14);
  test1308(14,15);
  test1309(-14,-15);
  test1310(-14,-14);
  test1311(-14,-13);
  test1312(14,13);
  test1313(14,14);
  test1314(14,15);

  test1400(-15,-16);
  test1401(-15,-15);
  test1402(-15,-14);
  test1403(15,14);
  test1404(15,15);
  test1405(15,16);
  test1406(-15,-16);
  test1407(-15,-15);
  test1408(-15,-14);
  test1409(15,14);
  test1410(15,15);
  test1411(15,16);
  test1412(-15,-16);
  test1413(-15,-15);
  test1414(-15,-14);

  return 0;
}
