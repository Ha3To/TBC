#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

/*
int main()
{
	char c = 65;
	short s = 200;
	unsigned int ui = 3000000000U;//3,000,000,000U u는 생략해도됨
	long l = 65537L;
	long long ll = 12345678908642LL;//12'345'678'908'642LL

	printf("char = %hhd, %d, %c\n", c, c, c);//여기서 %c는 c값을 문자로 바꿔서 출력해준다.(아스키 코드값에서의 65번)
	printf("short = %hhd, %hd, %d\n", s, s, s);//short타입인데 char의 형식지정자(%hhd)를 지정해주면 overflow문제가 생긴다.
	printf("unsigned int = %u, %d\n", ui, ui);//여기서도 %u는 unsinged int형식 지정자라 정상출력되지만 %d는 singed int형식 지정자라서 역시 overflow문제가 생긴다.
	printf("long = %ld, %hd\n", l, l);//%ld는 long decimal 형식 지정자라 정상출력되지만, %hd는 long보다 작은 값의 크기를 다루기에 overflow문제가 생긴다.
	printf("long long = %lld, %ld\n", ll, ll);//long long의 형식 지정자인 %lld는 정상출력되지만, %ld는 long형식 지정자라서 역시 overflow문제가 생긴다.

	return 0;
}
*/

int main()
{
	unsigned int decimal = 4294967295;//ui가 가질수있는 가장 큰값
	unsigned int binary = 0b11111111111111111111111111111111;//0b를 넣으면 2진수를 나타냄(1은 32개임 = 32bit)
	unsigned int oct = 037777777777;//8진수는 앞에 0을 붙임
	unsigned int hex = 0xffffffff;//16진수는 x를 붙임(16진수는 실무에서 꽤 씀)

	printf("%u\n", decimal);
	printf("%u\n", binary);
	printf("%u\n", oct);
	printf("%u\n", hex);//출력해보면 전부다 10진수로 같은 수가 출력된다.

	printf("%o %x %#o %#x %#X", decimal, decimal, decimal, decimal, decimal);
	//여기서는 각각의 수들을 8진수나 16진수로 출력하는 코드이다.
	//%o = octal, %x = hexadecimal, %# = 8진수 혹은 16진수앞에 붙는 0이나 0x를 붙여서 출력해준다, %#X = 대문자로 출력해준다.

	return 0;
}