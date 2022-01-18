#include <stdio.h>
#include <limits.h>

//x64로 실행시킬것!

int main()
{
	printf("%10i\n", 1234567);
	printf("%-10i\n", 1234567);
	printf("%+i %+i\n", 123, -123);
	printf("% i \n% i\n", 123, -123);
	printf("%X\n", 17);
	printf("%#X\n", 17);
	printf("%05i\n", 123);
	printf("%*i\n", 7, 456);

	printf("\nPrecision\n");
	printf("%.3d\n", 1024);
	printf("%.5d\n", 1024);
	printf("%.3f\n", 123456.1234567);
	printf("%.3f\n", 123456.1235);
	printf("%10.3f\n", 123.45678);				//전체 자리수가 10이고 소수점 아래 자리수는 3번째까지
	printf("%010.3f\n", 123.45678);
	printf("%.5s\n", "ABCDEFGHIJKLMN");			//문자열도 숫자와 똑같음
	printf("%.s\n", "ABCDEFGHIJKLMN");			//.숫자에서 숫자를 안넣어주면 0을 넣은것처럼 작동

	printf("\nLength\n");
	printf("%hhd %hd %d\n", 257, 257, 257);		//overflow발생
	printf("%d %lld %lld\n", INT_MAX + 1, INT_MAX + 1, 214783648LL);	//ll을 안붙여주면 overflow발생

	return 0;
}