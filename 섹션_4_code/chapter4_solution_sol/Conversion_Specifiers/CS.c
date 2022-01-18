#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
	double d = 3.1415926535897932384626433832795028841971693993751058209749445;

	printf("%c\n", 'A');									//한글자를 표현할때는 ''이거 사용하기!
	printf("%s", "I love you\n");
	printf("Even if there's a small chance, \
we owe this to everyone who's not in this room to try\n");	//이렇게 줄이 길어지면 \와 enter한번 치고(enter이후 생긴 빈칸은 지우고) 이어서 쓰기!

	printf("\n");
	printf("%d %i %i %i\n", 1004, 1234, INT_MAX, UINT_MAX);	//%i(signed integer)에다가 unsigned integer max를 넣으면 overflow 생김
	printf("%u %u %u\n", 1024, -1, UINT_MAX);				//여기도 위와같은 이유로 overflow 생김

	printf("\n");
	printf("%f %f %lf\n", 3.141592f, d, d);					//시스템내에서 %f을 사실 double로 바꿔서 인식함, 그래서 %lf에서 l은 무시됨
	printf("%a %A\n", d, d);
	printf("%e %E\n", d, d);

	printf("\n");
	printf("%g %g\n", 123456.789, 1234567.89);
	printf("%G %G\n", 123456.789, 1234567.89);
	printf("%g %g\n", 0.00012345, 0.000012345);
	printf("%G %G\n", 0.00012345, 0.000012345);

	printf("\n");
	printf("%o\n", 9);
	printf("%p\n", &d);										//포인터를 가르키는 지정자, 여기서는 d의 메모리 주소를 출력

	printf("\n");
	printf("%x %X\n", 11, 11);
	printf("%%\n");											//%기호를 출력하는 코드

	printf("\n");
	printf("%9d\n", 12345);									//%9d = 출력할때 9자리로 출력
	printf("%09d\n", 12345);								//%09d = 출력할때 9자리로 출력하되 빈칸은 '0'으로 채워라
	printf("%.2f\n", 3.141592);								//%.2f = 소수점 2자리까지만 출력
	printf("%.20f %.20lf\n", d, d);							//double데이터가 사용하는 메모리의 양보다 넘치는 부분은 잘리고 출력됨

	printf("\n");
	int n_printed = printf("Counting!");
	printf("%u\n", n_printed);								//printf도 return값이 있는데 그 값은 출력하는 문자개수, 그래서 출력해보면 문자열과 '9'가 출력됨

	return 0;
}