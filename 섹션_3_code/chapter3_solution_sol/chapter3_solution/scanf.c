//#define _CRT_SECURE_NO_WARNINGS //scanf()를 사용하려면 이 구문을 꼭 써줘야지만 사용할수있다.(VS에서만 이럼)
//저게 귀찮으면 project옵션 -> propertise -> c/c++ -> preprocessor -> processor definition에서 ;_CRT_SECURE_NO_WARNINGS를 추가해주자
//다만 이게 debug 모드에서만 적용되었기때문에 release 모드에서는 다시 적용시켜줘야됨
//VScode에서는 이거 없이 그냥 scanf함수 쓰면 됩니다.

#include <stdio.h>

/*
int main()
{
	int i = 0, j = 0;
	int sum = 0;

	printf("Input Two integers\n");

	scanf("%d%d", &i, &j); // & : ampersand
	//scanf는 프로그램이 실행되면 사용자로부터 값을 입력을 받도록하는 함수임
	//&가 붙는 이유는 변수의 주소를 넘겨주기 위해서이다.

	sum = i + j;

	printf("%d + %d = %d\n", i, j, sum);

	return 0;
}
*/

//원을 달러로 바꿔주는 계산기
int main()
{
	float Won = 0.0f;
	float Dollar = 0.0f;

	printf("Input Won\n");
	scanf_s("%f", &Won);

	Dollar = Won * 0.00089f;//f를 붙이면 float형 리터럴이 된다.

	printf("Dollar = %f\n", Dollar);

	return 0;
}