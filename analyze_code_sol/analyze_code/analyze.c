#include <stdio.h>//전처리기(컴파일하기전에 처리할것)

int main(void)//main함수 정의 시작
{//<-영역(scope)의 시작
	int a;//변수 선언
	int b;
	int c;

	a = 1;//변수에 값 대입
	b = 2;
	c = a + b;//변수에 연산결과 대입

	printf("Result is %i", c);//함수 호출(여기선 printf)

	return 0;//결과값을 반환
}//<-영역의 끝