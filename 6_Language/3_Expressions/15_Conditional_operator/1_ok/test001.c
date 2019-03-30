/*
 * One of the following shall hold for the second and third operands:
 * - both operands have arithmetic type;
 * - ...
 *
 * If both the second and third operands have arithmetic type, the usual
 * arithmetic conversions are performed to bring them to a common type and
 * the result has that type.
 */

#include <stdio.h>

enum E { a, b, c };

int x;

void test0000(char y, char z)
{
  printf("`test0000' called\n");
  printf("%d\n", x ? y : z);
}

void test0001(char y, signed char z)
{
  printf("`test0001' called\n");
  printf("%d\n", x ? y : z);
}

void test0002(char y, unsigned char z)
{
  printf("`test0002' called\n");
  printf("%d\n", x ? y : z);
}

void test0003(char y, short int z)
{
  printf("`test0003' called\n");
  printf("%d\n", x ? y : z);
}

void test0004(char y, unsigned short int z)
{
  printf("`test0004' called\n");
  printf("%d\n", x ? y : z);
}

void test0005(char y, int z)
{
  printf("`test0005' called\n");
  printf("%d\n", x ? y : z);
}

void test0006(char y, unsigned int z)
{
  printf("`test0006' called\n");
  printf("%d\n", x ? y : z);
}

void test0007(char y, long int z)
{
  printf("`test0007' called\n");
  printf("%ld\n", x ? y : z);
}

void test0008(char y, unsigned long int z)
{
  printf("`test0008' called\n");
  printf("%lu\n", x ? y : z);
}

void test0009(char y, long long int z)
{
  printf("`test0009' called\n");
  printf("%lld\n", x ? y : z);
}

void test0010(char y, unsigned long long int z)
{
  printf("`test0010' called\n");
  printf("%llu\n", x ? y : z);
}

void test0011(char y, float z)
{
  printf("`test0011' called\n");
  printf("%f\n", x ? y : z);
}

void test0012(char y, double z)
{
  printf("`test0012' called\n");
  printf("%f\n", x ? y : z);
}

void test0013(char y, long double z)
{
  printf("`test0013' called\n");
  printf("%Lf\n", x ? y : z);
}

void test0014(char y, enum E z)
{
  printf("`test0014' called\n");
  printf("%d\n", x ? y : z);
}

void test0100(signed char y, char z)
{
  printf("`test0100' called\n");
  printf("%d\n", x ? y : z);
}

void test0101(signed char y, signed char z)
{
  printf("`test0101' called\n");
  printf("%d\n", x ? y : z);
}

void test0102(signed char y, unsigned char z)
{
  printf("`test0102' called\n");
  printf("%d\n", x ? y : z);
}

void test0103(signed char y, short int z)
{
  printf("`test0103' called\n");
  printf("%d\n", x ? y : z);
}

void test0104(signed char y, unsigned short int z)
{
  printf("`test0104' called\n");
  printf("%d\n", x ? y : z);
}

void test0105(signed char y, int z)
{
  printf("`test0105' called\n");
  printf("%d\n", x ? y : z);
}

void test0106(signed char y, unsigned int z)
{
  printf("`test0106' called\n");
  printf("%d\n", x ? y : z);
}

void test0107(signed char y, long int z)
{
  printf("`test0107' called\n");
  printf("%ld\n", x ? y : z);
}

void test0108(signed char y, unsigned long int z)
{
  printf("`test0108' called\n");
  printf("%lu\n", x ? y : z);
}

void test0109(signed char y, long long int z)
{
  printf("`test0109' called\n");
  printf("%lld\n", x ? y : z);
}

void test0110(signed char y, unsigned long long int z)
{
  printf("`test0110' called\n");
  printf("%llu\n", x ? y : z);
}

void test0111(signed char y, float z)
{
  printf("`test0111' called\n");
  printf("%f\n", x ? y : z);
}

void test0112(signed char y, double z)
{
  printf("`test0112' called\n");
  printf("%f\n", x ? y : z);
}

void test0113(signed char y, long double z)
{
  printf("`test0113' called\n");
  printf("%Lf\n", x ? y : z);
}

void test0114(signed char y, enum E z)
{
  printf("`test0114' called\n");
  printf("%d\n", x ? y : z);
}


void test0200(unsigned char y, char z)
{
  printf("`test0200' called\n");
  printf("%d\n", x ? y : z);
}

void test0201(unsigned char y, signed char z)
{
  printf("`test0201' called\n");
  printf("%d\n", x ? y : z);
}

void test0202(unsigned char y, unsigned char z)
{
  printf("`test0202' called\n");
  printf("%d\n", x ? y : z);
}

void test0203(unsigned char y, short int z)
{
  printf("`test0203' called\n");
  printf("%d\n", x ? y : z);
}

void test0204(unsigned char y, unsigned short int z)
{
  printf("`test0204' called\n");
  printf("%d\n", x ? y : z);
}

void test0205(unsigned char y, int z)
{
  printf("`test0205' called\n");
  printf("%d\n", x ? y : z);
}

void test0206(unsigned char y, unsigned int z)
{
  printf("`test0206' called\n");
  printf("%d\n", x ? y : z);
}

void test0207(unsigned char y, long int z)
{
  printf("`test0207' called\n");
  printf("%ld\n", x ? y : z);
}

void test0208(unsigned char y, unsigned long int z)
{
  printf("`test0208' called\n");
  printf("%lu\n", x ? y : z);
}

void test0209(unsigned char y, long long int z)
{
  printf("`test0209' called\n");
  printf("%lld\n", x ? y : z);
}

void test0210(unsigned char y, unsigned long long int z)
{
  printf("`test0210' called\n");
  printf("%llu\n", x ? y : z);
}

void test0211(unsigned char y, float z)
{
  printf("`test0211' called\n");
  printf("%f\n", x ? y : z);
}

void test0212(unsigned char y, double z)
{
  printf("`test0212' called\n");
  printf("%f\n", x ? y : z);
}

void test0213(unsigned char y, long double z)
{
  printf("`test0213' called\n");
  printf("%Lf\n", x ? y : z);
}

void test0214(unsigned char y, enum E z)
{
  printf("`test0214' called\n");
  printf("%d\n", x ? y : z);
}

void test0300(short int y, char z)
{
  printf("`test0300' called\n");
  printf("%d\n", x ? y : z);
}

void test0301(short int y, signed char z)
{
  printf("`test0301' called\n");
  printf("%d\n", x ? y : z);
}

void test0302(short int y, unsigned char z)
{
  printf("`test0302' called\n");
  printf("%d\n", x ? y : z);
}

void test0303(short int y, short int z)
{
  printf("`test0303' called\n");
  printf("%d\n", x ? y : z);
}

void test0304(short int y, unsigned short int z)
{
  printf("`test0304' called\n");
  printf("%d\n", x ? y : z);
}

void test0305(short int y, int z)
{
  printf("`test0305' called\n");
  printf("%d\n", x ? y : z);
}

void test0306(short int y, unsigned int z)
{
  printf("`test0306' called\n");
  printf("%d\n", x ? y : z);
}

void test0307(short int y, long int z)
{
  printf("`test0307' called\n");
  printf("%ld\n", x ? y : z);
}

void test0308(short int y, unsigned long int z)
{
  printf("`test0308' called\n");
  printf("%lu\n", x ? y : z);
}

void test0309(short int y, long long int z)
{
  printf("`test0309' called\n");
  printf("%lld\n", x ? y : z);
}

void test0310(short int y, unsigned long long int z)
{
  printf("`test0310' called\n");
  printf("%llu\n", x ? y : z);
}

void test0311(short int y, float z)
{
  printf("`test0311' called\n");
  printf("%f\n", x ? y : z);
}

void test0312(short int y, double z)
{
  printf("`test0312' called\n");
  printf("%f\n", x ? y : z);
}

void test0313(short int y, long double z)
{
  printf("`test0313' called\n");
  printf("%Lf\n", x ? y : z);
}

void test0314(short int y, enum E z)
{
  printf("`test0314' called\n");
  printf("%d\n", x ? y : z);
}


void test0400(unsigned short int y, char z)
{
  printf("`test0400' called\n");
  printf("%d\n", x ? y : z);
}

void test0401(unsigned short int y, signed char z)
{
  printf("`test0401' called\n");
  printf("%d\n", x ? y : z);
}

void test0402(unsigned short int y, unsigned char z)
{
  printf("`test0402' called\n");
  printf("%d\n", x ? y : z);
}

void test0403(unsigned short int y, short int z)
{
  printf("`test0403' called\n");
  printf("%d\n", x ? y : z);
}

void test0404(unsigned short int y, unsigned short int z)
{
  printf("`test0404' called\n");
  printf("%d\n", x ? y : z);
}

void test0405(unsigned short int y, int z)
{
  printf("`test0405' called\n");
  printf("%d\n", x ? y : z);
}

void test0406(unsigned short int y, unsigned int z)
{
  printf("`test0406' called\n");
  printf("%d\n", x ? y : z);
}

void test0407(unsigned short int y, long int z)
{
  printf("`test0407' called\n");
  printf("%ld\n", x ? y : z);
}

void test0408(unsigned short int y, unsigned long int z)
{
  printf("`test0408' called\n");
  printf("%lu\n", x ? y : z);
}

void test0409(unsigned short int y, long long int z)
{
  printf("`test0409' called\n");
  printf("%lld\n", x ? y : z);
}

void test0410(unsigned short int y, unsigned long long int z)
{
  printf("`test0410' called\n");
  printf("%llu\n", x ? y : z);
}

void test0411(unsigned short int y, float z)
{
  printf("`test0411' called\n");
  printf("%f\n", x ? y : z);
}

void test0412(unsigned short int y, double z)
{
  printf("`test0412' called\n");
  printf("%f\n", x ? y : z);
}

void test0413(unsigned short int y, long double z)
{
  printf("`test0413' called\n");
  printf("%Lf\n", x ? y : z);
}

void test0414(unsigned short int y, enum E z)
{
  printf("`test0414' called\n");
  printf("%d\n", x ? y : z);
}

void test0500(int y, char z)
{
  printf("`test0500' called\n");
  printf("%d\n", x ? y : z);
}

void test0501(int y, signed char z)
{
  printf("`test0501' called\n");
  printf("%d\n", x ? y : z);
}

void test0502(int y, unsigned char z)
{
  printf("`test0502' called\n");
  printf("%d\n", x ? y : z);
}

void test0503(int y, short int z)
{
  printf("`test0503' called\n");
  printf("%d\n", x ? y : z);
}

void test0504(int y, unsigned short int z)
{
  printf("`test0504' called\n");
  printf("%d\n", x ? y : z);
}

void test0505(int y, int z)
{
  printf("`test0505' called\n");
  printf("%d\n", x ? y : z);
}

void test0506(int y, unsigned int z)
{
  printf("`test0506' called\n");
  printf("%d\n", x ? y : z);
}

void test0507(int y, long int z)
{
  printf("`test0507' called\n");
  printf("%ld\n", x ? y : z);
}

void test0508(int y, unsigned long int z)
{
  printf("`test0508' called\n");
  printf("%lu\n", x ? y : z);
}

void test0509(int y, long long int z)
{
  printf("`test0509' called\n");
  printf("%lld\n", x ? y : z);
}

void test0510(int y, unsigned long long int z)
{
  printf("`test0510' called\n");
  printf("%llu\n", x ? y : z);
}

void test0511(int y, float z)
{
  printf("`test0511' called\n");
  printf("%f\n", x ? y : z);
}

void test0512(int y, double z)
{
  printf("`test0512' called\n");
  printf("%f\n", x ? y : z);
}

void test0513(int y, long double z)
{
  printf("`test0513' called\n");
  printf("%Lf\n", x ? y : z);
}

void test0514(int y, enum E z)
{
  printf("`test0514' called\n");
  printf("%d\n", x ? y : z);
}

void test0600(unsigned int y, char z)
{
  printf("`test0600' called\n");
  printf("%u\n", x ? y : z);
}

void test0601(unsigned int y, signed char z)
{
  printf("`test0601' called\n");
  printf("%u\n", x ? y : z);
}

void test0602(unsigned int y, unsigned char z)
{
  printf("`test0602' called\n");
  printf("%u\n", x ? y : z);
}

void test0603(unsigned int y, short int z)
{
  printf("`test0603' called\n");
  printf("%u\n", x ? y : z);
}

void test0604(unsigned int y, unsigned short int z)
{
  printf("`test0604' called\n");
  printf("%u\n", x ? y : z);
}

void test0605(unsigned int y, int z)
{
  printf("`test0605' called\n");
  printf("%u\n", x ? y : z);
}

void test0606(unsigned int y, unsigned int z)
{
  printf("`test0606' called\n");
  printf("%u\n", x ? y : z);
}

void test0607(unsigned int y, long int z)
{
  printf("`test0607' called\n");
  printf("%ld\n", x ? y : z);
}

void test0608(unsigned int y, unsigned long int z)
{
  printf("`test0608' called\n");
  printf("%lu\n", x ? y : z);
}

void test0609(unsigned int y, long long int z)
{
  printf("`test0609' called\n");
  printf("%lld\n", x ? y : z);
}

void test0610(unsigned int y, unsigned long long int z)
{
  printf("`test0610' called\n");
  printf("%llu\n", x ? y : z);
}

void test0611(unsigned int y, float z)
{
  printf("`test0611' called\n");
  printf("%f\n", x ? y : z);
}

void test0612(unsigned int y, double z)
{
  printf("`test0612' called\n");
  printf("%f\n", x ? y : z);
}

void test0613(unsigned int y, long double z)
{
  printf("`test0613' called\n");
  printf("%Lf\n", x ? y : z);
}

void test0614(unsigned int y, enum E z)
{
  printf("`test0614' called\n");
  printf("%u\n", x ? y : z);
}


void test0700(long int y, char z)
{
  printf("`test0700' called\n");
  printf("%ld\n", x ? y : z);
}

void test0701(long int y, signed char z)
{
  printf("`test0701' called\n");
  printf("%ld\n", x ? y : z);
}

void test0702(long int y, unsigned char z)
{
  printf("`test0702' called\n");
  printf("%ld\n", x ? y : z);
}

void test0703(long int y, short int z)
{
  printf("`test0703' called\n");
  printf("%ld\n", x ? y : z);
}

void test0704(long int y, unsigned short int z)
{
  printf("`test0704' called\n");
  printf("%ld\n", x ? y : z);
}

void test0705(long int y, int z)
{
  printf("`test0705' called\n");
  printf("%ld\n", x ? y : z);
}

void test0706(long int y, unsigned int z)
{
  printf("`test0706' called\n");
  printf("%ld\n", x ? y : z);
}

void test0707(long int y, long int z)
{
  printf("`test0707' called\n");
  printf("%ld\n", x ? y : z);
}

void test0708(long int y, unsigned long int z)
{
  printf("`test0708' called\n");
  printf("%lu\n", x ? y : z);
}

void test0709(long int y, long long int z)
{
  printf("`test0709' called\n");
  printf("%lld\n", x ? y : z);
}

void test0710(long int y, unsigned long long int z)
{
  printf("`test0710' called\n");
  printf("%llu\n", x ? y : z);
}

void test0711(long int y, float z)
{
  printf("`test0711' called\n");
  printf("%f\n", x ? y : z);
}

void test0712(long int y, double z)
{
  printf("`test0712' called\n");
  printf("%f\n", x ? y : z);
}

void test0713(long int y, long double z)
{
  printf("`test0713' called\n");
  printf("%Lf\n", x ? y : z);
}

void test0714(long int y, enum E z)
{
  printf("`test0714' called\n");
  printf("%ld\n", x ? y : z);
}

void test0800(unsigned long int y, char z)
{
  printf("`test0800' called\n");
  printf("%lu\n", x ? y : z);
}

void test0801(unsigned long int y, signed char z)
{
  printf("`test0801' called\n");
  printf("%lu\n", x ? y : z);
}

void test0802(unsigned long int y, unsigned char z)
{
  printf("`test0802' called\n");
  printf("%lu\n", x ? y : z);
}

void test0803(unsigned long int y, short int z)
{
  printf("`test0803' called\n");
  printf("%lu\n", x ? y : z);
}

void test0804(unsigned long int y, unsigned short int z)
{
  printf("`test0804' called\n");
  printf("%lu\n", x ? y : z);
}

void test0805(unsigned long int y, int z)
{
  printf("`test0805' called\n");
  printf("%lu\n", x ? y : z);
}

void test0806(unsigned long int y, unsigned int z)
{
  printf("`test0806' called\n");
  printf("%lu\n", x ? y : z);
}

void test0807(unsigned long int y, long int z)
{
  printf("`test0807' called\n");
  printf("%lu\n", x ? y : z);
}

void test0808(unsigned long int y, unsigned long int z)
{
  printf("`test0808' called\n");
  printf("%ld\n", x ? y : z);
}

void test0809(unsigned long int y, long long int z)
{
  printf("`test0809' called\n");
  printf("%lld\n", x ? y : z);
}

void test0810(unsigned long int y, unsigned long long int z)
{
  printf("`test0810' called\n");
  printf("%llu\n", x ? y : z);
}

void test0811(unsigned long int y, float z)
{
  printf("`test0811' called\n");
  printf("%f\n", x ? y : z);
}

void test0812(unsigned long int y, double z)
{
  printf("`test0812' called\n");
  printf("%f\n", x ? y : z);
}

void test0813(unsigned long int y, long double z)
{
  printf("`test0813' called\n");
  printf("%Lf\n", x ? y : z);
}

void test0814(unsigned long int y, enum E z)
{
  printf("`test0814' called\n");
  printf("%ld\n", x ? y : z);
}

void test0900(long long int y, char z)
{
  printf("`test0900' called\n");
  printf("%lld\n", x ? y : z);
}

void test0901(long long int y, signed char z)
{
  printf("`test0901' called\n");
  printf("%lld\n", x ? y : z);
}

void test0902(long long int y, unsigned char z)
{
  printf("`test0902' called\n");
  printf("%lld\n", x ? y : z);
}

void test0903(long long int y, short int z)
{
  printf("`test0903' called\n");
  printf("%lld\n", x ? y : z);
}

void test0904(long long int y, unsigned short int z)
{
  printf("`test0904' called\n");
  printf("%lld\n", x ? y : z);
}

void test0905(long long int y, int z)
{
  printf("`test0905' called\n");
  printf("%lld\n", x ? y : z);
}

void test0906(long long int y, unsigned int z)
{
  printf("`test0906' called\n");
  printf("%lld\n", x ? y : z);
}

void test0907(long long int y, long int z)
{
  printf("`test0907' called\n");
  printf("%lld\n", x ? y : z);
}

void test0908(long long int y, unsigned long int z)
{
  printf("`test0908' called\n");
  printf("%lld\n", x ? y : z);
}

void test0909(long long int y, long long int z)
{
  printf("`test0909' called\n");
  printf("%lld\n", x ? y : z);
}

void test0910(long long int y, unsigned long long int z)
{
  printf("`test0910' called\n");
  printf("%llu\n", x ? y : z);
}

void test0911(long long int y, float z)
{
  printf("`test0911' called\n");
  printf("%f\n", x ? y : z);
}

void test0912(long long int y, double z)
{
  printf("`test0912' called\n");
  printf("%f\n", x ? y : z);
}

void test0913(long long int y, long double z)
{
  printf("`test0913' called\n");
  printf("%Lf\n", x ? y : z);
}

void test0914(long long int y, enum E z)
{
  printf("`test0914' called\n");
  printf("%lld\n", x ? y : z);
}


void test1000(unsigned long long int y, char z)
{
  printf("`test1000' called\n");
  printf("%llu\n", x ? y : z);
}

void test1001(unsigned long long int y, signed char z)
{
  printf("`test1001' called\n");
  printf("%llu\n", x ? y : z);
}

void test1002(unsigned long long int y, unsigned char z)
{
  printf("`test1002' called\n");
  printf("%llu\n", x ? y : z);
}

void test1003(unsigned long long int y, short int z)
{
  printf("`test1003' called\n");
  printf("%llu\n", x ? y : z);
}

void test1004(unsigned long long int y, unsigned short int z)
{
  printf("`test1004' called\n");
  printf("%llu\n", x ? y : z);
}

void test1005(unsigned long long int y, int z)
{
  printf("`test1005' called\n");
  printf("%llu\n", x ? y : z);
}

void test1006(unsigned long long int y, unsigned int z)
{
  printf("`test1006' called\n");
  printf("%llu\n", x ? y : z);
}

void test1007(unsigned long long int y, long int z)
{
  printf("`test1007' called\n");
  printf("%llu\n", x ? y : z);
}

void test1008(unsigned long long int y, unsigned long int z)
{
  printf("`test1008' called\n");
  printf("%llu\n", x ? y : z);
}

void test1009(unsigned long long int y, long long int z)
{
  printf("`test1009' called\n");
  printf("%llu\n", x ? y : z);
}

void test1010(unsigned long long int y, unsigned long long int z)
{
  printf("`test1010' called\n");
  printf("%llu\n", x ? y : z);
}

void test1011(unsigned long long int y, float z)
{
  printf("`test1011' called\n");
  printf("%f\n", x ? y : z);
}

void test1012(unsigned long long int y, double z)
{
  printf("`test1012' called\n");
  printf("%f\n", x ? y : z);
}

void test1013(unsigned long long int y, long double z)
{
  printf("`test1013' called\n");
  printf("%Lf\n", x ? y : z);
}

void test1014(unsigned long long int y, enum E z)
{
  printf("`test1014' called\n");
  printf("%llu\n", x ? y : z);
}

void test1100(float y, char z)
{
  printf("`test1100' called\n");
  printf("%f\n", x ? y : z);
}

void test1101(float y, signed char z)
{
  printf("`test1101' called\n");
  printf("%f\n", x ? y : z);
}

void test1102(float y, unsigned char z)
{
  printf("`test1102' called\n");
  printf("%f\n", x ? y : z);
}

void test1103(float y, short int z)
{
  printf("`test1103' called\n");
  printf("%f\n", x ? y : z);
}

void test1104(float y, unsigned short int z)
{
  printf("`test1104' called\n");
  printf("%f\n", x ? y : z);
}

void test1105(float y, int z)
{
  printf("`test1105' called\n");
  printf("%f\n", x ? y : z);
}

void test1106(float y, unsigned int z)
{
  printf("`test1106' called\n");
  printf("%f\n", x ? y : z);
}

void test1107(float y, long int z)
{
  printf("`test1107' called\n");
  printf("%f\n", x ? y : z);
}

void test1108(float y, unsigned long int z)
{
  printf("`test1108' called\n");
  printf("%f\n", x ? y : z);
}

void test1109(float y, long long int z)
{
  printf("`test1109' called\n");
  printf("%f\n", x ? y : z);
}

void test1110(float y, unsigned long long int z)
{
  printf("`test1110' called\n");
  printf("%f\n", x ? y : z);
}

void test1111(float y, float z)
{
  printf("`test1111' called\n");
  printf("%f\n", x ? y : z);
}

void test1112(float y, double z)
{
  printf("`test1112' called\n");
  printf("%f\n", x ? y : z);
}

void test1113(float y, long double z)
{
  printf("`test1113' called\n");
  printf("%Lf\n", x ? y : z);
}

void test1114(float y, enum E z)
{
  printf("`test1114' called\n");
  printf("%f\n", x ? y : z);
}

void test1200(double y, char z)
{
  printf("`test1200' called\n");
  printf("%f\n", x ? y : z);
}

void test1201(double y, signed char z)
{
  printf("`test1201' called\n");
  printf("%f\n", x ? y : z);
}

void test1202(double y, unsigned char z)
{
  printf("`test1202' called\n");
  printf("%f\n", x ? y : z);
}

void test1203(double y, short int z)
{
  printf("`test1203' called\n");
  printf("%f\n", x ? y : z);
}

void test1204(double y, unsigned short int z)
{
  printf("`test1204' called\n");
  printf("%f\n", x ? y : z);
}

void test1205(double y, int z)
{
  printf("`test1205' called\n");
  printf("%f\n", x ? y : z);
}

void test1206(double y, unsigned int z)
{
  printf("`test1206' called\n");
  printf("%f\n", x ? y : z);
}

void test1207(double y, long int z)
{
  printf("`test1207' called\n");
  printf("%f\n", x ? y : z);
}

void test1208(double y, unsigned long int z)
{
  printf("`test1208' called\n");
  printf("%f\n", x ? y : z);
}

void test1209(double y, long long int z)
{
  printf("`test1209' called\n");
  printf("%f\n", x ? y : z);
}

void test1210(double y, unsigned long long int z)
{
  printf("`test1210' called\n");
  printf("%f\n", x ? y : z);
}

void test1211(double y, float z)
{
  printf("`test1211' called\n");
  printf("%f\n", x ? y : z);
}

void test1212(double y, double z)
{
  printf("`test1212' called\n");
  printf("%f\n", x ? y : z);
}

void test1213(double y, long double z)
{
  printf("`test1213' called\n");
  printf("%Lf\n", x ? y : z);
}

void test1214(double y, enum E z)
{
  printf("`test1214' called\n");
  printf("%f\n", x ? y : z);
}

void test1300(long double y, char z)
{
  printf("`test1300' called\n");
  printf("%Lf\n", x ? y : z);
}

void test1301(long double y, signed char z)
{
  printf("`test1301' called\n");
  printf("%Lf\n", x ? y : z);
}

void test1302(long double y, unsigned char z)
{
  printf("`test1302' called\n");
  printf("%Lf\n", x ? y : z);
}

void test1303(long double y, short int z)
{
  printf("`test1303' called\n");
  printf("%Lf\n", x ? y : z);
}

void test1304(long double y, unsigned short int z)
{
  printf("`test1304' called\n");
  printf("%Lf\n", x ? y : z);
}

void test1305(long double y, int z)
{
  printf("`test1305' called\n");
  printf("%Lf\n", x ? y : z);
}

void test1306(long double y, unsigned int z)
{
  printf("`test1306' called\n");
  printf("%Lf\n", x ? y : z);
}

void test1307(long double y, long int z)
{
  printf("`test1307' called\n");
  printf("%Lf\n", x ? y : z);
}

void test1308(long double y, unsigned long int z)
{
  printf("`test1308' called\n");
  printf("%Lf\n", x ? y : z);
}

void test1309(long double y, long long int z)
{
  printf("`test1309' called\n");
  printf("%Lf\n", x ? y : z);
}

void test1310(long double y, unsigned long long int z)
{
  printf("`test1310' called\n");
  printf("%Lf\n", x ? y : z);
}

void test1311(long double y, float z)
{
  printf("`test1311' called\n");
  printf("%Lf\n", x ? y : z);
}

void test1312(long double y, double z)
{
  printf("`test1312' called\n");
  printf("%Lf\n", x ? y : z);
}

void test1313(long double y, long double z)
{
  printf("`test1313' called\n");
  printf("%Lf\n", x ? y : z);
}

void test1314(long double y, enum E z)
{
  printf("`test1314' called\n");
  printf("%Lf\n", x ? y : z);
}


void test1400(enum E y, char z)
{
  printf("`test1400' called\n");
  printf("%d\n", x ? y : z);
}

void test1401(enum E y, signed char z)
{
  printf("`test1401' called\n");
  printf("%d\n", x ? y : z);
}

void test1402(enum E y, unsigned char z)
{
  printf("`test1402' called\n");
  printf("%d\n", x ? y : z);
}

void test1403(enum E y, short int z)
{
  printf("`test1403' called\n");
  printf("%d\n", x ? y : z);
}

void test1404(enum E y, unsigned short int z)
{
  printf("`test1404' called\n");
  printf("%d\n", x ? y : z);
}

void test1405(enum E y, int z)
{
  printf("`test1405' called\n");
  printf("%d\n", x ? y : z);
}

void test1406(enum E y, unsigned int z)
{
  printf("`test1406' called\n");
  printf("%u\n", x ? y : z);
}

void test1407(enum E y, long int z)
{
  printf("`test1407' called\n");
  printf("%ld\n", x ? y : z);
}

void test1408(enum E y, unsigned long int z)
{
  printf("`test1408' called\n");
  printf("%lu\n", x ? y : z);
}

void test1409(enum E y, long long int z)
{
  printf("`test1409' called\n");
  printf("%lld\n", x ? y : z);
}

void test1410(enum E y, unsigned long long int z)
{
  printf("`test1410' called\n");
  printf("%llu\n", x ? y : z);
}

void test1411(enum E y, float z)
{
  printf("`test1411' called\n");
  printf("%f\n", x ? y : z);
}

void test1412(enum E y, double z)
{
  printf("`test1412' called\n");
  printf("%f\n", x ? y : z);
}

void test1413(enum E y, long double z)
{
  printf("`test1413' called\n");
  printf("%Lf\n", x ? y : z);
}

void test1414(enum E y, enum E z)
{
  printf("`test1414' called\n");
  printf("%d\n", x ? y : z);
}

int main(void)
{
  x = 0; test0000(1,2); x = 1; test0000(1,2);
  x = 0; test0001(3,4); x = 1; test0001(3,4);
  x = 0; test0002(5,6); x = 1; test0002(5,6);
  x = 0; test0003(7,8); x = 1; test0003(7,8);
  x = 0; test0004(1,-2); x = 1; test0004(1,-2);
  x = 0; test0005(3,-4); x = 1; test0005(3,-4);
  x = 0; test0006(5,-6); x = 1; test0006(5,-6);
  x = 0; test0007(7,-8); x = 1; test0007(7,-8);
  x = 0; test0008(-1,2); x = 1; test0008(-1,2);
  x = 0; test0009(-3,4); x = 1; test0009(-3,4);
  x = 0; test0010(-5,6); x = 1; test0010(-5,6);
  x = 0; test0011(-7,8); x = 1; test0011(-7,8);
  x = 0; test0012(-1,-2); x = 1; test0012(-1,-2);
  x = 0; test0013(-3,-4); x = 1; test0013(-3,-4);
  x = 0; test0014(-5,-6); x = 1; test0014(-5,-6);

  x = 0; test0100(1,2); x = 1; test0100(1,2);
  x = 0; test0101(3,4); x = 1; test0101(3,4);
  x = 0; test0102(5,6); x = 1; test0102(5,6);
  x = 0; test0103(7,8); x = 1; test0103(7,8);
  x = 0; test0104(1,-2); x = 1; test0104(1,-2);
  x = 0; test0105(3,-4); x = 1; test0105(3,-4);
  x = 0; test0106(5,-6); x = 1; test0106(5,-6);
  x = 0; test0107(7,-8); x = 1; test0107(7,-8);
  x = 0; test0108(-1,2); x = 1; test0108(-1,2);
  x = 0; test0109(-3,4); x = 1; test0109(-3,4);
  x = 0; test0110(-5,6); x = 1; test0110(-5,6);
  x = 0; test0111(-7,8); x = 1; test0111(-7,8);
  x = 0; test0112(-1,-2); x = 1; test0112(-1,-2);
  x = 0; test0113(-3,-4); x = 1; test0113(-3,-4);
  x = 0; test0114(-5,-6); x = 1; test0114(-5,-6);

  x = 0; test0200(1,2); x = 1; test0200(1,2);
  x = 0; test0201(3,4); x = 1; test0201(3,4);
  x = 0; test0202(5,6); x = 1; test0202(5,6);
  x = 0; test0203(7,8); x = 1; test0203(7,8);
  x = 0; test0204(1,-2); x = 1; test0204(1,-2);
  x = 0; test0205(3,-4); x = 1; test0205(3,-4);
  x = 0; test0206(5,-6); x = 1; test0206(5,-6);
  x = 0; test0207(7,-8); x = 1; test0207(7,-8);
  x = 0; test0208(-1,2); x = 1; test0208(-1,2);
  x = 0; test0209(-3,4); x = 1; test0209(-3,4);
  x = 0; test0210(-5,6); x = 1; test0210(-5,6);
  x = 0; test0211(-7,8); x = 1; test0211(-7,8);
  x = 0; test0212(-1,-2); x = 1; test0212(-1,-2);
  x = 0; test0213(-3,-4); x = 1; test0213(-3,-4);
  x = 0; test0214(-5,-6); x = 1; test0214(-5,-6);

  x = 0; test0300(1,2); x = 1; test0300(1,2);
  x = 0; test0301(3,4); x = 1; test0301(3,4);
  x = 0; test0302(5,6); x = 1; test0302(5,6);
  x = 0; test0303(7,8); x = 1; test0303(7,8);
  x = 0; test0304(1,-2); x = 1; test0304(1,-2);
  x = 0; test0305(3,-4); x = 1; test0305(3,-4);
  x = 0; test0306(5,-6); x = 1; test0306(5,-6);
  x = 0; test0307(7,-8); x = 1; test0307(7,-8);
  x = 0; test0308(-1,2); x = 1; test0308(-1,2);
  x = 0; test0309(-3,4); x = 1; test0309(-3,4);
  x = 0; test0310(-5,6); x = 1; test0310(-5,6);
  x = 0; test0311(-7,8); x = 1; test0311(-7,8);
  x = 0; test0312(-1,-2); x = 1; test0312(-1,-2);
  x = 0; test0313(-3,-4); x = 1; test0313(-3,-4);
  x = 0; test0314(-5,-6); x = 1; test0314(-5,-6);

  x = 0; test0400(1,2); x = 1; test0400(1,2);
  x = 0; test0401(3,4); x = 1; test0401(3,4);
  x = 0; test0402(5,6); x = 1; test0402(5,6);
  x = 0; test0403(7,8); x = 1; test0403(7,8);
  x = 0; test0404(1,-2); x = 1; test0404(1,-2);
  x = 0; test0405(3,-4); x = 1; test0405(3,-4);
  x = 0; test0406(5,-6); x = 1; test0406(5,-6);
  x = 0; test0407(7,-8); x = 1; test0407(7,-8);
  x = 0; test0408(-1,2); x = 1; test0408(-1,2);
  x = 0; test0409(-3,4); x = 1; test0409(-3,4);
  x = 0; test0410(-5,6); x = 1; test0410(-5,6);
  x = 0; test0411(-7,8); x = 1; test0411(-7,8);
  x = 0; test0412(-1,-2); x = 1; test0412(-1,-2);
  x = 0; test0413(-3,-4); x = 1; test0413(-3,-4);
  x = 0; test0414(-5,-6); x = 1; test0414(-5,-6);

  x = 0; test0500(1,2); x = 1; test0500(1,2);
  x = 0; test0501(3,4); x = 1; test0501(3,4);
  x = 0; test0502(5,6); x = 1; test0502(5,6);
  x = 0; test0503(7,8); x = 1; test0503(7,8);
  x = 0; test0504(1,-2); x = 1; test0504(1,-2);
  x = 0; test0505(3,-4); x = 1; test0505(3,-4);
  x = 0; test0506(5,-6); x = 1; test0506(5,-6);
  x = 0; test0507(7,-8); x = 1; test0507(7,-8);
  x = 0; test0508(-1,2); x = 1; test0508(-1,2);
  x = 0; test0509(-3,4); x = 1; test0509(-3,4);
  x = 0; test0510(-5,6); x = 1; test0510(-5,6);
  x = 0; test0511(-7,8); x = 1; test0511(-7,8);
  x = 0; test0512(-1,-2); x = 1; test0512(-1,-2);
  x = 0; test0513(-3,-4); x = 1; test0513(-3,-4);
  x = 0; test0514(-5,-6); x = 1; test0514(-5,-6);

  x = 0; test0600(1,2); x = 1; test0600(1,2);
  x = 0; test0601(3,4); x = 1; test0601(3,4);
  x = 0; test0602(5,6); x = 1; test0602(5,6);
  x = 0; test0603(7,8); x = 1; test0603(7,8);
  x = 0; test0604(1,-2); x = 1; test0604(1,-2);
  x = 0; test0605(3,-4); x = 1; test0605(3,-4);
  x = 0; test0606(5,-6); x = 1; test0606(5,-6);
  x = 0; test0607(7,-8); x = 1; test0607(7,-8);
  x = 0; test0608(-1,2); x = 1; test0608(-1,2);
  x = 0; test0609(-3,4); x = 1; test0609(-3,4);
  x = 0; test0610(-5,6); x = 1; test0610(-5,6);
  x = 0; test0611(7,8); x = 1; test0611(7,8);
  x = 0; test0612(-1,-2); x = 1; test0612(-1,-2);
  x = 0; test0613(-3,-4); x = 1; test0613(-3,-4);
  x = 0; test0614(-5,-6); x = 1; test0614(-5,-6);

  x = 0; test0700(1,2); x = 1; test0700(1,2);
  x = 0; test0701(3,4); x = 1; test0701(3,4);
  x = 0; test0702(5,6); x = 1; test0702(5,6);
  x = 0; test0703(7,8); x = 1; test0703(7,8);
  x = 0; test0704(1,-2); x = 1; test0704(1,-2);
  x = 0; test0705(3,-4); x = 1; test0705(3,-4);
  x = 0; test0706(5,-6); x = 1; test0706(5,-6);
  x = 0; test0707(7,-8); x = 1; test0707(7,-8);
  x = 0; test0708(-1,2); x = 1; test0708(-1,2);
  x = 0; test0709(-3,4); x = 1; test0709(-3,4);
  x = 0; test0710(-5,6); x = 1; test0710(-5,6);
  x = 0; test0711(-7,8); x = 1; test0711(-7,8);
  x = 0; test0712(-1,-2); x = 1; test0712(-1,-2);
  x = 0; test0713(-3,-4); x = 1; test0713(-3,-4);
  x = 0; test0714(-5,-6); x = 1; test0714(-5,-6);

  x = 0; test0800(1,2); x = 1; test0800(1,2);
  x = 0; test0801(3,4); x = 1; test0801(3,4);
  x = 0; test0802(5,6); x = 1; test0802(5,6);
  x = 0; test0803(7,8); x = 1; test0803(7,8);
  x = 0; test0804(1,-2); x = 1; test0804(1,-2);
  x = 0; test0805(3,-4); x = 1; test0805(3,-4);
  x = 0; test0806(5,-6); x = 1; test0806(5,-6);
  x = 0; test0807(7,-8); x = 1; test0807(7,-8);
  x = 0; test0808(-1,2); x = 1; test0808(-1,2);
  x = 0; test0809(-3,4); x = 1; test0809(-3,4);
  x = 0; test0810(-5,6); x = 1; test0810(-5,6);
  x = 0; test0811(7,8); x = 1; test0811(7,8);
  x = 0; test0812(-1,-2); x = 1; test0812(-1,-2);
  x = 0; test0813(-3,-4); x = 1; test0813(-3,-4);
  x = 0; test0814(-5,-6); x = 1; test0814(-5,-6);

  x = 0; test0900(1,2); x = 1; test0900(1,2);
  x = 0; test0901(3,4); x = 1; test0901(3,4);
  x = 0; test0902(5,6); x = 1; test0902(5,6);
  x = 0; test0903(7,8); x = 1; test0903(7,8);
  x = 0; test0904(1,-2); x = 1; test0904(1,-2);
  x = 0; test0905(3,-4); x = 1; test0905(3,-4);
  x = 0; test0906(5,-6); x = 1; test0906(5,-6);
  x = 0; test0907(7,-8); x = 1; test0907(7,-8);
  x = 0; test0908(-1,2); x = 1; test0908(-1,2);
  x = 0; test0909(-3,4); x = 1; test0909(-3,4);
  x = 0; test0910(-5,6); x = 1; test0910(-5,6);
  x = 0; test0911(-7,8); x = 1; test0911(-7,8);
  x = 0; test0912(-1,-2); x = 1; test0912(-1,-2);
  x = 0; test0913(-3,-4); x = 1; test0913(-3,-4);
  x = 0; test0914(-5,6); x = 1; test0914(-5,6);

  x = 0; test1000(1,2); x = 1; test1000(1,2);
  x = 0; test1001(3,4); x = 1; test1001(3,4);
  x = 0; test1002(5,6); x = 1; test1002(5,6);
  x = 0; test1003(7,8); x = 1; test1003(7,8);
  x = 0; test1004(1,-2); x = 1; test1004(1,-2);
  x = 0; test1005(3,-4); x = 1; test1005(3,-4);
  x = 0; test1006(5,-6); x = 1; test1006(5,-6);
  x = 0; test1007(7,-8); x = 1; test1007(7,-8);
  x = 0; test1008(-1,2); x = 1; test1008(-1,2);
  x = 0; test1009(-3,4); x = 1; test1009(-3,4);
  x = 0; test1010(-5,6); x = 1; test1010(-5,6);
  x = 0; test1011(-7,8); x = 1; test1011(-7,8);
  x = 0; test1012(-1,-2); x = 1; test1012(-1,-2);
  x = 0; test1013(-3,-4); x = 1; test1013(-3,-4);
  x = 0; test1014(-5,6); x = 1; test1014(-5,6);

  x = 0; test1100(1,2); x = 1; test1100(1,2);
  x = 0; test1101(3,4); x = 1; test1101(3,4);
  x = 0; test1102(5,6); x = 1; test1102(5,6);
  x = 0; test1103(7,8); x = 1; test1103(7,8);
  x = 0; test1104(1,-2); x = 1; test1104(1,-2);
  x = 0; test1105(3,-4); x = 1; test1105(3,-4);
  x = 0; test1106(-5,6); x = 1; test1106(-5,6);
  x = 0; test1107(7,-8); x = 1; test1107(7,-8);
  x = 0; test1108(-1,2); x = 1; test1108(-1,2);
  x = 0; test1109(-3,4); x = 1; test1109(-3,4);
  x = 0; test1110(-5,6); x = 1; test1110(-5,6);
  x = 0; test1111(-7,8); x = 1; test1111(-7,8);
  x = 0; test1112(-1,-2); x = 1; test1112(-1,-2);
  x = 0; test1113(-3,-4); x = 1; test1113(-3,-4);
  x = 0; test1114(-5,6); x = 1; test1114(-5,6);

  x = 0; test1200(1,2); x = 1; test1200(1,2);
  x = 0; test1201(3,4); x = 1; test1201(3,4);
  x = 0; test1202(5,6); x = 1; test1202(5,6);
  x = 0; test1203(7,8); x = 1; test1203(7,8);
  x = 0; test1204(1,-2); x = 1; test1204(1,-2);
  x = 0; test1205(3,-4); x = 1; test1205(3,-4);
  x = 0; test1206(5,-6); x = 1; test1206(5,-6);
  x = 0; test1207(7,-8); x = 1; test1207(7,-8);
  x = 0; test1208(-1,2); x = 1; test1208(-1,2);
  x = 0; test1209(-3,4); x = 1; test1209(-3,4);
  x = 0; test1210(-5,6); x = 1; test1210(-5,6);
  x = 0; test1211(-7,8); x = 1; test1211(-7,8);
  x = 0; test1212(-1,-2); x = 1; test1212(-1,-2);
  x = 0; test1213(-3,-4); x = 1; test1213(-3,-4);
  x = 0; test1214(-5,6); x = 1; test1214(-5,6);

  x = 0; test1300(1,2); x = 1; test1300(1,2);
  x = 0; test1301(3,4); x = 1; test1301(3,4);
  x = 0; test1302(5,6); x = 1; test1302(5,6);
  x = 0; test1303(7,8); x = 1; test1303(7,8);
  x = 0; test1304(1,-2); x = 1; test1304(1,-2);
  x = 0; test1305(3,-4); x = 1; test1305(3,-4);
  x = 0; test1306(5,-6); x = 1; test1306(5,-6);
  x = 0; test1307(7,-8); x = 1; test1307(7,-8);
  x = 0; test1308(-1,2); x = 1; test1308(-1,2);
  x = 0; test1309(-3,4); x = 1; test1309(-3,4);
  x = 0; test1310(-5,6); x = 1; test1310(-5,6);
  x = 0; test1311(-7,8); x = 1; test1311(-7,8);
  x = 0; test1312(-1,-2); x = 1; test1312(-1,-2);
  x = 0; test1313(-3,-4); x = 1; test1313(-3,-4);
  x = 0; test1314(-5,6); x = 1; test1314(-5,6);

  x = 0; test1400(1,2); x = 1; test1400(1,2);
  x = 0; test1401(3,4); x = 1; test1401(3,4);
  x = 0; test1402(5,6); x = 1; test1402(5,6);
  x = 0; test1403(7,8); x = 1; test1403(7,8);
  x = 0; test1404(1,-2); x = 1; test1404(1,-2);
  x = 0; test1405(3,-4); x = 1; test1405(3,-4);
  x = 0; test1406(5,-6); x = 1; test1406(5,-6);
  x = 0; test1407(7,-8); x = 1; test1407(7,-8);
  x = 0; test1408(-1,2); x = 1; test1408(-1,2);
  x = 0; test1409(3,4); x = 1; test1409(3,4);
  x = 0; test1410(5,6); x = 1; test1410(5,6);
  x = 0; test1411(7,8); x = 1; test1411(7,8);
  x = 0; test1412(1,-2); x = 1; test1412(1,-2);
  x = 0; test1413(3,-4); x = 1; test1413(3,-4);
  x = 0; test1414(5,-6); x = 1; test1414(5,-6);

  return 0;
}
