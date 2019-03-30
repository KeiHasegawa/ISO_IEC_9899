/*
 * One of the following shall hold:
 * - the left operand has qualified or unqualified arithmetic type and the
 *   right has arithmetic type;
 * - ...
 */
#include <stdio.h>

enum E { a, b, c };

void test0000(char x, char y)
{
  printf("`test0000' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}

void test0001(char x, signed char y)
{
  printf("`test0001' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}

void test0002(char x, unsigned char y)
{
  printf("`test0002' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}

void test0003(char x, short int y)
{
  printf("`test0003' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}

void test0004(char x, unsigned short int y)
{
  printf("`test0004' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}

void test0005(char x, int y)
{
  printf("`test0005' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}

void test0006(char x, unsigned int y)
{
  printf("`test0006' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}

void test0007(char x, long int y)
{
  printf("`test0007' called\n");
  x = y;
  printf("%d, %ld\n", x, y);
}

void test0008(char x, unsigned long int y)
{
  printf("`test0008' called\n");
  x = y;
  printf("%d, %ld\n", x, y);
}

void test0009(char x, long long int y)
{
  printf("`test0009' called\n");
  x = y;
  printf("%d, %lld\n", x, y);
}

void test0010(char x, unsigned long long int y)
{
  printf("`test0010' called\n");
  x = y;
  printf("%d, %lld\n", x, y);
}

void test0011(char x, float y)
{
  printf("`test0011' called\n");
  x = y;
  printf("%d, %f\n", x, y);
}

void test0012(char x, double y)
{
  printf("`test0012' called\n");
  x = y;
  printf("%d, %f\n", x, y);
}

void test0013(char x, long double y)
{
  printf("`test0013' called\n");
  x = y;
  printf("%d, %Lf\n", x, y);
}

void test0014(char x, enum E y)
{
  printf("`test0014' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}

void test0100(signed char x, char y)
{
  printf("`test0100' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}

void test0101(signed char x, signed char y)
{
  printf("`test0101' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}

void test0102(signed char x, unsigned char y)
{
  printf("`test0102' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}

void test0103(signed char x, short int y)
{
  printf("`test0103' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}

void test0104(signed char x, unsigned short int y)
{
  printf("`test0104' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}

void test0105(signed char x, int y)
{
  printf("`test0105' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}

void test0106(signed char x, unsigned int y)
{
  printf("`test0106' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}

void test0107(signed char x, long int y)
{
  printf("`test0107' called\n");
  x = y;
  printf("%d, %ld\n", x, y);
}

void test0108(signed char x, unsigned long int y)
{
  printf("`test0108' called\n");
  x = y;
  printf("%d, %ld\n", x, y);
}

void test0109(signed char x, long long int y)
{
  printf("`test0109' called\n");
  x = y;
  printf("%d, %lld\n", x, y);
}

void test0110(signed char x, unsigned long long int y)
{
  printf("`test0110' called\n");
  x = y;
  printf("%d, %lld\n", x, y);
}

void test0111(signed char x, float y)
{
  printf("`test0111' called\n");
  x = y;
  printf("%d, %f\n", x, y);
}

void test0112(signed char x, double y)
{
  printf("`test0112' called\n");
  x = y;
  printf("%d, %f\n", x, y);
}

void test0113(signed char x, long double y)
{
  printf("`test0113' called\n");
  x = y;
  printf("%d, %Lf\n", x, y);
}

void test0114(signed char x, enum E y)
{
  printf("`test0114' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}


void test0200(unsigned char x, char y)
{
  printf("`test0200' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}

void test0201(unsigned char x, signed char y)
{
  printf("`test0201' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}

void test0202(unsigned char x, unsigned char y)
{
  printf("`test0202' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}

void test0203(unsigned char x, short int y)
{
  printf("`test0203' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}

void test0204(unsigned char x, unsigned short int y)
{
  printf("`test0204' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}

void test0205(unsigned char x, int y)
{
  printf("`test0205' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}

void test0206(unsigned char x, unsigned int y)
{
  printf("`test0206' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}

void test0207(unsigned char x, long int y)
{
  printf("`test0207' called\n");
  x = y;
  printf("%d, %ld\n", x, y);
}

void test0208(unsigned char x, unsigned long int y)
{
  printf("`test0208' called\n");
  x = y;
  printf("%d, %ld\n", x, y);
}

void test0209(unsigned char x, long long int y)
{
  printf("`test0209' called\n");
  x = y;
  printf("%d, %lld\n", x, y);
}

void test0210(unsigned char x, unsigned long long int y)
{
  printf("`test0210' called\n");
  x = y;
  printf("%d, %lld\n", x, y);
}

void test0211(unsigned char x, float y)
{
  printf("`test0211' called\n");
  x = y;
  printf("%d, %f\n", x, y);
}

void test0212(unsigned char x, double y)
{
  printf("`test0212' called\n");
  x = y;
  printf("%d, %f\n", x, y);
}

void test0213(unsigned char x, long double y)
{
  printf("`test0213' called\n");
  x = y;
  printf("%d, %Lf\n", x, y);
}

void test0214(unsigned char x, enum E y)
{
  printf("`test0214' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}

void test0300(short int x, char y)
{
  printf("`test0300' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}

void test0301(short int x, signed char y)
{
  printf("`test0301' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}

void test0302(short int x, unsigned char y)
{
  printf("`test0302' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}

void test0303(short int x, short int y)
{
  printf("`test0303' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}

void test0304(short int x, unsigned short int y)
{
  printf("`test0304' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}

void test0305(short int x, int y)
{
  printf("`test0305' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}

void test0306(short int x, unsigned int y)
{
  printf("`test0306' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}

void test0307(short int x, long int y)
{
  printf("`test0307' called\n");
  x = y;
  printf("%d, %ld\n", x, y);
}

void test0308(short int x, unsigned long int y)
{
  printf("`test0308' called\n");
  x = y;
  printf("%d, %ld\n", x, y);
}

void test0309(short int x, long long int y)
{
  printf("`test0309' called\n");
  x = y;
  printf("%d, %lld\n", x, y);
}

void test0310(short int x, unsigned long long int y)
{
  printf("`test0310' called\n");
  x = y;
  printf("%d, %lld\n", x, y);
}

void test0311(short int x, float y)
{
  printf("`test0311' called\n");
  x = y;
  printf("%d, %f\n", x, y);
}

void test0312(short int x, double y)
{
  printf("`test0312' called\n");
  x = y;
  printf("%d, %f\n", x, y);
}

void test0313(short int x, long double y)
{
  printf("`test0313' called\n");
  x = y;
  printf("%d, %Lf\n", x, y);
}

void test0314(short int x, enum E y)
{
  printf("`test0314' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}


void test0400(unsigned short int x, char y)
{
  printf("`test0400' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}

void test0401(unsigned short int x, signed char y)
{
  printf("`test0401' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}

void test0402(unsigned short int x, unsigned char y)
{
  printf("`test0402' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}

void test0403(unsigned short int x, short int y)
{
  printf("`test0403' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}

void test0404(unsigned short int x, unsigned short int y)
{
  printf("`test0404' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}

void test0405(unsigned short int x, int y)
{
  printf("`test0405' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}

void test0406(unsigned short int x, unsigned int y)
{
  printf("`test0406' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}

void test0407(unsigned short int x, long int y)
{
  printf("`test0407' called\n");
  x = y;
  printf("%d, %ld\n", x, y);
}

void test0408(unsigned short int x, unsigned long int y)
{
  printf("`test0408' called\n");
  x = y;
  printf("%d, %ld\n", x, y);
}

void test0409(unsigned short int x, long long int y)
{
  printf("`test0409' called\n");
  x = y;
  printf("%d, %lld\n", x, y);
}

void test0410(unsigned short int x, unsigned long long int y)
{
  printf("`test0410' called\n");
  x = y;
  printf("%d, %lld\n", x, y);
}

void test0411(unsigned short int x, float y)
{
  printf("`test0411' called\n");
  x = y;
  printf("%d, %f\n", x, y);
}

void test0412(unsigned short int x, double y)
{
  printf("`test0412' called\n");
  x = y;
  printf("%d, %f\n", x, y);
}

void test0413(unsigned short int x, long double y)
{
  printf("`test0413' called\n");
  x = y;
  printf("%d, %Lf\n", x, y);
}

void test0414(unsigned short int x, enum E y)
{
  printf("`test0414' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}

void test0500(int x, char y)
{
  printf("`test0500' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}

void test0501(int x, signed char y)
{
  printf("`test0501' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}

void test0502(int x, unsigned char y)
{
  printf("`test0502' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}

void test0503(int x, short int y)
{
  printf("`test0503' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}

void test0504(int x, unsigned short int y)
{
  printf("`test0504' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}

void test0505(int x, int y)
{
  printf("`test0505' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}

void test0506(int x, unsigned int y)
{
  printf("`test0506' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}

void test0507(int x, long int y)
{
  printf("`test0507' called\n");
  x = y;
  printf("%d, %ld\n", x, y);
}

void test0508(int x, unsigned long int y)
{
  printf("`test0508' called\n");
  x = y;
  printf("%d, %ld\n", x, y);
}

void test0509(int x, long long int y)
{
  printf("`test0509' called\n");
  x = y;
  printf("%d, %lld\n", x, y);
}

void test0510(int x, unsigned long long int y)
{
  printf("`test0510' called\n");
  x = y;
  printf("%d, %lld\n", x, y);
}

void test0511(int x, float y)
{
  printf("`test0511' called\n");
  x = y;
  printf("%d, %f\n", x, y);
}

void test0512(int x, double y)
{
  printf("`test0512' called\n");
  x = y;
  printf("%d, %f\n", x, y);
}

void test0513(int x, long double y)
{
  printf("`test0513' called\n");
  x = y;
  printf("%d, %Lf\n", x, y);
}

void test0514(int x, enum E y)
{
  printf("`test0514' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}

void test0600(unsigned int x, char y)
{
  printf("`test0600' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}

void test0601(unsigned int x, signed char y)
{
  printf("`test0601' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}

void test0602(unsigned int x, unsigned char y)
{
  printf("`test0602' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}

void test0603(unsigned int x, short int y)
{
  printf("`test0603' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}

void test0604(unsigned int x, unsigned short int y)
{
  printf("`test0604' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}

void test0605(unsigned int x, int y)
{
  printf("`test0605' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}

void test0606(unsigned int x, unsigned int y)
{
  printf("`test0606' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}

void test0607(unsigned int x, long int y)
{
  printf("`test0607' called\n");
  x = y;
  printf("%d, %ld\n", x, y);
}

void test0608(unsigned int x, unsigned long int y)
{
  printf("`test0608' called\n");
  x = y;
  printf("%d, %ld\n", x, y);
}

void test0609(unsigned int x, long long int y)
{
  printf("`test0609' called\n");
  x = y;
  printf("%d, %lld\n", x, y);
}

void test0610(unsigned int x, unsigned long long int y)
{
  printf("`test0610' called\n");
  x = y;
  printf("%d, %lld\n", x, y);
}

void test0611(unsigned int x, float y)
{
  printf("`test0611' called\n");
  x = y;
  printf("%d, %f\n", x, y);
}

void test0612(unsigned int x, double y)
{
  printf("`test0612' called\n");
  x = y;
  printf("%d, %f\n", x, y);
}

void test0613(unsigned int x, long double y)
{
  printf("`test0613' called\n");
  x = y;
  printf("%d, %Lf\n", x, y);
}

void test0614(unsigned int x, enum E y)
{
  printf("`test0614' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}


void test0700(long int x, char y)
{
  printf("`test0700' called\n");
  x = y;
  printf("%ld, %d\n", x, y);
}

void test0701(long int x, signed char y)
{
  printf("`test0701' called\n");
  x = y;
  printf("%ld, %d\n", x, y);
}

void test0702(long int x, unsigned char y)
{
  printf("`test0702' called\n");
  x = y;
  printf("%ld, %d\n", x, y);
}

void test0703(long int x, short int y)
{
  printf("`test0703' called\n");
  x = y;
  printf("%ld, %d\n", x, y);
}

void test0704(long int x, unsigned short int y)
{
  printf("`test0704' called\n");
  x = y;
  printf("%ld, %d\n", x, y);
}

void test0705(long int x, int y)
{
  printf("`test0705' called\n");
  x = y;
  printf("%ld, %d\n", x, y);
}

void test0706(long int x, unsigned int y)
{
  printf("`test0706' called\n");
  x = y;
  printf("%ld, %d\n", x, y);
}

void test0707(long int x, long int y)
{
  printf("`test0707' called\n");
  x = y;
  printf("%ld, %ld\n", x, y);
}

void test0708(long int x, unsigned long int y)
{
  printf("`test0708' called\n");
  x = y;
  printf("%ld, %ld\n", x, y);
}

void test0709(long int x, long long int y)
{
  printf("`test0709' called\n");
  x = y;
  printf("%ld, %lld\n", x, y);
}

void test0710(long int x, unsigned long long int y)
{
  printf("`test0710' called\n");
  x = y;
  printf("%ld, %lld\n", x, y);
}

void test0711(long int x, float y)
{
  printf("`test0711' called\n");
  x = y;
  printf("%ld, %f\n", x, y);
}

void test0712(long int x, double y)
{
  printf("`test0712' called\n");
  x = y;
  printf("%ld, %f\n", x, y);
}

void test0713(long int x, long double y)
{
  printf("`test0713' called\n");
  x = y;
  printf("%ld, %Lf\n", x, y);
}

void test0714(long int x, enum E y)
{
  printf("`test0714' called\n");
  x = y;
  printf("%ld, %d\n", x, y);
}

void test0800(unsigned long int x, char y)
{
  printf("`test0800' called\n");
  x = y;
  printf("%ld, %d\n", x, y);
}

void test0801(unsigned long int x, signed char y)
{
  printf("`test0801' called\n");
  x = y;
  printf("%ld, %d\n", x, y);
}

void test0802(unsigned long int x, unsigned char y)
{
  printf("`test0802' called\n");
  x = y;
  printf("%ld, %d\n", x, y);
}

void test0803(unsigned long int x, short int y)
{
  printf("`test0803' called\n");
  x = y;
  printf("%ld, %d\n", x, y);
}

void test0804(unsigned long int x, unsigned short int y)
{
  printf("`test0804' called\n");
  x = y;
  printf("%ld, %d\n", x, y);
}

void test0805(unsigned long int x, int y)
{
  printf("`test0805' called\n");
  x = y;
  printf("%ld, %d\n", x, y);
}

void test0806(unsigned long int x, unsigned int y)
{
  printf("`test0806' called\n");
  x = y;
  printf("%ld, %d\n", x, y);
}

void test0807(unsigned long int x, long int y)
{
  printf("`test0807' called\n");
  x = y;
  printf("%ld, %ld\n", x, y);
}

void test0808(unsigned long int x, unsigned long int y)
{
  printf("`test0808' called\n");
  x = y;
  printf("%ld, %ld\n", x, y);
}

void test0809(unsigned long int x, long long int y)
{
  printf("`test0809' called\n");
  x = y;
  printf("%ld, %lld\n", x, y);
}

void test0810(unsigned long int x, unsigned long long int y)
{
  printf("`test0810' called\n");
  x = y;
  printf("%ld, %lld\n", x, y);
}

void test0811(unsigned long int x, float y)
{
  printf("`test0811' called\n");
  x = y;
  printf("%ld, %f\n", x, y);
}

void test0812(unsigned long int x, double y)
{
  printf("`test0812' called\n");
  x = y;
  printf("%ld, %f\n", x, y);
}

void test0813(unsigned long int x, long double y)
{
  printf("`test0813' called\n");
  x = y;
  printf("%ld, %Lf\n", x, y);
}

void test0814(unsigned long int x, enum E y)
{
  printf("`test0814' called\n");
  x = y;
  printf("%ld, %d\n", x, y);
}

void test0900(long long int x, char y)
{
  printf("`test0900' called\n");
  x = y;
  printf("%lld, %d\n", x, y);
}

void test0901(long long int x, signed char y)
{
  printf("`test0901' called\n");
  x = y;
  printf("%lld, %d\n", x, y);
}

void test0902(long long int x, unsigned char y)
{
  printf("`test0902' called\n");
  x = y;
  printf("%lld, %d\n", x, y);
}

void test0903(long long int x, short int y)
{
  printf("`test0903' called\n");
  x = y;
  printf("%lld, %d\n", x, y);
}

void test0904(long long int x, unsigned short int y)
{
  printf("`test0904' called\n");
  x = y;
  printf("%lld, %d\n", x, y);
}

void test0905(long long int x, int y)
{
  printf("`test0905' called\n");
  x = y;
  printf("%lld, %d\n", x, y);
}

void test0906(long long int x, unsigned int y)
{
  printf("`test0906' called\n");
  x = y;
  printf("%lld, %d\n", x, y);
}

void test0907(long long int x, long int y)
{
  printf("`test0907' called\n");
  x = y;
  printf("%lld, %ld\n", x, y);
}

void test0908(long long int x, unsigned long int y)
{
  printf("`test0908' called\n");
  x = y;
  printf("%lld, %ld\n", x, y);
}

void test0909(long long int x, long long int y)
{
  printf("`test0909' called\n");
  x = y;
  printf("%lld, %lld\n", x, y);
}

void test0910(long long int x, unsigned long long int y)
{
  printf("`test0910' called\n");
  x = y;
  printf("%lld, %lld\n", x, y);
}

void test0911(long long int x, float y)
{
  printf("`test0911' called\n");
  x = y;
  printf("%lld, %f\n", x, y);
}

void test0912(long long int x, double y)
{
  printf("`test0912' called\n");
  x = y;
  printf("%lld, %f\n", x, y);
}

void test0913(long long int x, long double y)
{
  printf("`test0913' called\n");
  x = y;
  printf("%lld, %Lf\n", x, y);
}

void test0914(long long int x, enum E y)
{
  printf("`test0914' called\n");
  x = y;
  printf("%lld, %d\n", x, y);
}


void test1000(unsigned long long int x, char y)
{
  printf("`test1000' called\n");
  x = y;
  printf("%lld, %d\n", x, y);
}

void test1001(unsigned long long int x, signed char y)
{
  printf("`test1001' called\n");
  x = y;
  printf("%lld, %d\n", x, y);
}

void test1002(unsigned long long int x, unsigned char y)
{
  printf("`test1002' called\n");
  x = y;
  printf("%lld, %d\n", x, y);
}

void test1003(unsigned long long int x, short int y)
{
  printf("`test1003' called\n");
  x = y;
  printf("%lld, %d\n", x, y);
}

void test1004(unsigned long long int x, unsigned short int y)
{
  printf("`test1004' called\n");
  x = y;
  printf("%lld, %d\n", x, y);
}

void test1005(unsigned long long int x, int y)
{
  printf("`test1005' called\n");
  x = y;
  printf("%lld, %d\n", x, y);
}

void test1006(unsigned long long int x, unsigned int y)
{
  printf("`test1006' called\n");
  x = y;
  printf("%lld, %d\n", x, y);
}

void test1007(unsigned long long int x, long int y)
{
  printf("`test1007' called\n");
  x = y;
  printf("%lld, %ld\n", x, y);
}

void test1008(unsigned long long int x, unsigned long int y)
{
  printf("`test1008' called\n");
  x = y;
  printf("%lld, %ld\n", x, y);
}

void test1009(unsigned long long int x, long long int y)
{
  printf("`test1009' called\n");
  x = y;
  printf("%lld, %lld\n", x, y);
}

void test1010(unsigned long long int x, unsigned long long int y)
{
  printf("`test1010' called\n");
  x = y;
  printf("%lld, %lld\n", x, y);
}

void test1011(unsigned long long int x, float y)
{
  printf("`test1011' called\n");
  x = y;
  printf("%lld, %f\n", x, y);
}

void test1012(unsigned long long int x, double y)
{
  printf("`test1012' called\n");
  x = y;
  printf("%lld, %f\n", x, y);
}

void test1013(unsigned long long int x, long double y)
{
  printf("`test1013' called\n");
  x = y;
  printf("%lld, %Lf\n", x, y);
}

void test1014(unsigned long long int x, enum E y)
{
  printf("`test1014' called\n");
  x = y;
  printf("%lld, %d\n", x, y);
}

void test1100(float x, char y)
{
  printf("`test1100' called\n");
  x = y;
  printf("%f, %d\n", x, y);
}

void test1101(float x, signed char y)
{
  printf("`test1101' called\n");
  x = y;
  printf("%f, %d\n", x, y);
}

void test1102(float x, unsigned char y)
{
  printf("`test1102' called\n");
  x = y;
  printf("%f, %d\n", x, y);
}

void test1103(float x, short int y)
{
  printf("`test1103' called\n");
  x = y;
  printf("%f, %d\n", x, y);
}

void test1104(float x, unsigned short int y)
{
  printf("`test1104' called\n");
  x = y;
  printf("%f, %d\n", x, y);
}

void test1105(float x, int y)
{
  printf("`test1105' called\n");
  x = y;
  printf("%f, %d\n", x, y);
}

void test1106(float x, unsigned int y)
{
  printf("`test1106' called\n");
  x = y;
  printf("%f, %d\n", x, y);
}

void test1107(float x, long int y)
{
  printf("`test1107' called\n");
  x = y;
  printf("%f, %ld\n", x, y);
}

void test1108(float x, unsigned long int y)
{
  printf("`test1108' called\n");
  x = y;
  printf("%f, %ld\n", x, y);
}

void test1109(float x, long long int y)
{
  printf("`test1109' called\n");
  x = y;
  printf("%f, %lld\n", x, y);
}

void test1110(float x, unsigned long long int y)
{
  printf("`test1110' called\n");
  x = y;
  printf("%f, %lld\n", x, y);
}

void test1111(float x, float y)
{
  printf("`test1111' called\n");
  x = y;
  printf("%f, %f\n", x, y);
}

void test1112(float x, double y)
{
  printf("`test1112' called\n");
  x = y;
  printf("%f, %f\n", x, y);
}

void test1113(float x, long double y)
{
  printf("`test1113' called\n");
  x = y;
  printf("%f, %Lf\n", x, y);
}

void test1114(float x, enum E y)
{
  printf("`test1114' called\n");
  x = y;
  printf("%f, %d\n", x, y);
}

void test1200(double x, char y)
{
  printf("`test1200' called\n");
  x = y;
  printf("%f, %d\n", x, y);
}

void test1201(double x, signed char y)
{
  printf("`test1201' called\n");
  x = y;
  printf("%f, %d\n", x, y);
}

void test1202(double x, unsigned char y)
{
  printf("`test1202' called\n");
  x = y;
  printf("%f, %d\n", x, y);
}

void test1203(double x, short int y)
{
  printf("`test1203' called\n");
  x = y;
  printf("%f, %d\n", x, y);
}

void test1204(double x, unsigned short int y)
{
  printf("`test1204' called\n");
  x = y;
  printf("%f, %d\n", x, y);
}

void test1205(double x, int y)
{
  printf("`test1205' called\n");
  x = y;
  printf("%f, %d\n", x, y);
}

void test1206(double x, unsigned int y)
{
  printf("`test1206' called\n");
  x = y;
  printf("%f, %d\n", x, y);
}

void test1207(double x, long int y)
{
  printf("`test1207' called\n");
  x = y;
  printf("%f, %ld\n", x, y);
}

void test1208(double x, unsigned long int y)
{
  printf("`test1208' called\n");
  x = y;
  printf("%f, %ld\n", x, y);
}

void test1209(double x, long long int y)
{
  printf("`test1209' called\n");
  x = y;
  printf("%f, %lld\n", x, y);
}

void test1210(double x, unsigned long long int y)
{
  printf("`test1210' called\n");
  x = y;
  printf("%f, %lld\n", x, y);
}

void test1211(double x, float y)
{
  printf("`test1211' called\n");
  x = y;
  printf("%f, %f\n", x, y);
}

void test1212(double x, double y)
{
  printf("`test1212' called\n");
  x = y;
  printf("%f, %f\n", x, y);
}

void test1213(double x, long double y)
{
  printf("`test1213' called\n");
  x = y;
  printf("%f, %Lf\n", x, y);
}

void test1214(double x, enum E y)
{
  printf("`test1214' called\n");
  x = y;
  printf("%f, %d\n", x, y);
}

void test1300(long double x, char y)
{
  printf("`test1300' called\n");
  x = y;
  printf("%Lf, %d\n", x, y);
}

void test1301(long double x, signed char y)
{
  printf("`test1301' called\n");
  x = y;
  printf("%Lf, %d\n", x, y);
}

void test1302(long double x, unsigned char y)
{
  printf("`test1302' called\n");
  x = y;
  printf("%Lf, %d\n", x, y);
}

void test1303(long double x, short int y)
{
  printf("`test1303' called\n");
  x = y;
  printf("%Lf, %d\n", x, y);
}

void test1304(long double x, unsigned short int y)
{
  printf("`test1304' called\n");
  x = y;
  printf("%Lf, %d\n", x, y);
}

void test1305(long double x, int y)
{
  printf("`test1305' called\n");
  x = y;
  printf("%Lf, %d\n", x, y);
}

void test1306(long double x, unsigned int y)
{
  printf("`test1306' called\n");
  x = y;
  printf("%Lf, %d\n", x, y);
}

void test1307(long double x, long int y)
{
  printf("`test1307' called\n");
  x = y;
  printf("%Lf, %ld\n", x, y);
}

void test1308(long double x, unsigned long int y)
{
  printf("`test1308' called\n");
  x = y;
  printf("%Lf, %ld\n", x, y);
}

void test1309(long double x, long long int y)
{
  printf("`test1309' called\n");
  x = y;
  printf("%Lf, %lld\n", x, y);
}

void test1310(long double x, unsigned long long int y)
{
  printf("`test1310' called\n");
  x = y;
  printf("%Lf, %lld\n", x, y);
}

void test1311(long double x, float y)
{
  printf("`test1311' called\n");
  x = y;
  printf("%Lf, %f\n", x, y);
}

void test1312(long double x, double y)
{
  printf("`test1312' called\n");
  x = y;
  printf("%Lf, %f\n", x, y);
}

void test1313(long double x, long double y)
{
  printf("`test1313' called\n");
  x = y;
  printf("%Lf, %Lf\n", x, y);
}

void test1314(long double x, enum E y)
{
  printf("`test1314' called\n");
  x = y;
  printf("%Lf, %d\n", x, y);
}


void test1400(enum E x, char y)
{
  printf("`test1400' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}

void test1401(enum E x, signed char y)
{
  printf("`test1401' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}

void test1402(enum E x, unsigned char y)
{
  printf("`test1402' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}

void test1403(enum E x, short int y)
{
  printf("`test1403' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}

void test1404(enum E x, unsigned short int y)
{
  printf("`test1404' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}

void test1405(enum E x, int y)
{
  printf("`test1405' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}

void test1406(enum E x, unsigned int y)
{
  printf("`test1406' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}

void test1407(enum E x, long int y)
{
  printf("`test1407' called\n");
  x = y;
  printf("%d, %ld\n", x, y);
}

void test1408(enum E x, unsigned long int y)
{
  printf("`test1408' called\n");
  x = y;
  printf("%d, %ld\n", x, y);
}

void test1409(enum E x, long long int y)
{
  printf("`test1409' called\n");
  x = y;
  printf("%d, %lld\n", x, y);
}

void test1410(enum E x, unsigned long long int y)
{
  printf("`test1410' called\n");
  x = y;
  printf("%d, %lld\n", x, y);
}

void test1411(enum E x, float y)
{
  printf("`test1411' called\n");
  x = y;
  printf("%d, %f\n", x, y);
}

void test1412(enum E x, double y)
{
  printf("`test1412' called\n");
  x = y;
  printf("%d, %f\n", x, y);
}

void test1413(enum E x, long double y)
{
  printf("`test1413' called\n");
  x = y;
  printf("%d, %Lf\n", x, y);
}

void test1414(enum E x, enum E y)
{
  printf("`test1414' called\n");
  x = y;
  printf("%d, %d\n", x, y);
}

int main(void)
{
  test0000(1,2);
  test0001(3,4);
  test0002(5,6);
  test0003(7,8);
  test0004(1,-2);
  test0005(3,-4);
  test0006(5,-6);
  test0007(7,-8);
  test0008(-1,2);
  test0009(-3,4);
  test0010(-5,6);
  test0011(-7,8);
  test0012(-1,-2);
  test0013(-3,-4);
  test0014(-5,-6);

  test0100(1,2);
  test0101(3,4);
  test0102(5,6);
  test0103(7,8);
  test0104(1,-2);
  test0105(3,-4);
  test0106(5,-6);
  test0107(7,-8);
  test0108(-1,2);
  test0109(-3,4);
  test0110(-5,6);
  test0111(-7,8);
  test0112(-1,-2);
  test0113(-3,-4);
  test0114(-5,-6);

  test0200(1,2);
  test0201(3,4);
  test0202(5,6);
  test0203(7,8);
  test0204(1,-2);
  test0205(3,-4);
  test0206(5,-6);
  test0207(7,-8);
  test0208(-1,2);
  test0209(-3,4);
  test0210(-5,6);
  test0211(-7,8);
  test0212(-1,-2);
  test0213(-3,-4);
  test0214(-5,-6);

  test0300(1,2);
  test0301(3,4);
  test0302(5,6);
  test0303(7,8);
  test0304(1,-2);
  test0305(3,-4);
  test0306(5,-6);
  test0307(7,-8);
  test0308(-1,2);
  test0309(-3,4);
  test0310(-5,6);
  test0311(-7,8);
  test0312(-1,-2);
  test0313(-3,-4);
  test0314(-5,-6);

  test0400(1,2);
  test0401(3,4);
  test0402(5,6);
  test0403(7,8);
  test0404(1,-2);
  test0405(3,-4);
  test0406(5,-6);
  test0407(7,-8);
  test0408(-1,2);
  test0409(-3,4);
  test0410(-5,6);
  test0411(-7,8);
  test0412(-1,-2);
  test0413(-3,-4);
  test0414(-5,-6);

  test0500(1,2);
  test0501(3,4);
  test0502(5,6);
  test0503(7,8);
  test0504(1,-2);
  test0505(3,-4);
  test0506(5,-6);
  test0507(7,-8);
  test0508(-1,2);
  test0509(-3,4);
  test0510(-5,6);
  test0511(-7,8);
  test0512(-1,-2);
  test0513(-3,-4);
  test0514(-5,-6);

  test0600(1,2);
  test0601(3,4);
  test0602(5,6);
  test0603(7,8);
  test0604(1,-2);
  test0605(3,-4);
  test0606(5,-6);
  test0607(7,-8);
  test0608(-1,2);
  test0609(-3,4);
  test0610(-5,6);
  test0611(7,8);
  test0612(-1,-2);
  test0613(-3,-4);
  test0614(-5,-6);

  test0700(1,2);
  test0701(3,4);
  test0702(5,6);
  test0703(7,8);
  test0704(1,-2);
  test0705(3,-4);
  test0706(5,-6);
  test0707(7,-8);
  test0708(-1,2);
  test0709(-3,4);
  test0710(-5,6);
  test0711(-7,8);
  test0712(-1,-2);
  test0713(-3,-4);
  test0714(-5,-6);

  test0800(1,2);
  test0801(3,4);
  test0802(5,6);
  test0803(7,8);
  test0804(1,-2);
  test0805(3,-4);
  test0806(5,-6);
  test0807(7,-8);
  test0808(-1,2);
  test0809(-3,4);
  test0810(-5,6);
  test0811(7,8);
  test0812(-1,-2);
  test0813(-3,-4);
  test0814(-5,-6);

  test0900(1,2);
  test0901(3,4);
  test0902(5,6);
  test0903(7,8);
  test0904(1,-2);
  test0905(3,-4);
  test0906(5,-6);
  test0907(7,-8);
  test0908(-1,2);
  test0909(-3,4);
  test0910(-5,6);
  test0911(-7,8);
  test0912(-1,-2);
  test0913(-3,-4);
  test0914(-5,6);

  test1000(1,2);
  test1001(3,4);
  test1002(5,6);
  test1003(7,8);
  test1004(1,-2);
  test1005(3,-4);
  test1006(5,-6);
  test1007(7,-8);
  test1008(-1,2);
  test1009(-3,4);
  test1010(-5,6);
  test1011(-7,8);
  test1012(-1,-2);
  test1013(-3,-4);
  test1014(-5,6);

  test1100(1,2);
  test1101(3,4);
  test1102(5,6);
  test1103(7,8);
  test1104(1,-2);
  test1105(3,-4);
  test1106(-5,6);
  test1107(7,-8);
  test1108(-1,2);
  test1109(-3,4);
  test1110(-5,6);
  test1111(-7,8);
  test1112(-1,-2);
  test1113(-3,-4);
  test1114(-5,6);

  test1200(1,2);
  test1201(3,4);
  test1202(5,6);
  test1203(7,8);
  test1204(1,-2);
  test1205(3,-4);
  test1206(5,-6);
  test1207(7,-8);
  test1208(-1,2);
  test1209(-3,4);
  test1210(-5,6);
  test1211(-7,8);
  test1212(-1,-2);
  test1213(-3,-4);
  test1214(-5,6);

  test1300(1,2);
  test1301(3,4);
  test1302(5,6);
  test1303(7,8);
  test1304(1,-2);
  test1305(3,-4);
  test1306(5,-6);
  test1307(7,-8);
  test1308(-1,2);
  test1309(-3,4);
  test1310(-5,6);
  test1311(-7,8);
  test1312(-1,-2);
  test1313(-3,-4);
  test1314(-5,6);

  test1400(1,2);
  test1401(3,4);
  test1402(5,6);
  test1403(7,8);
  test1404(1,-2);
  test1405(3,-4);
  test1406(5,-6);
  test1407(7,-8);
  test1408(-1,2);
  test1409(3,4);
  test1410(5,6);
  test1411(7,8);
  test1412(1,-2);
  test1413(3,-4);
  test1414(5,-6);

  return 0;
}
