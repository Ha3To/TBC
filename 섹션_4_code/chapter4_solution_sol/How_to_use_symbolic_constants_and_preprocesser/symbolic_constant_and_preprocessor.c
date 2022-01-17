#include <stdio.h>
#define PI 3.141592f
#define AI_NAME "JARVIS"

int main()
{
	float radius, area, circum;

	printf("I'm %s.\n", AI_NAME);	//여기서 AI_NAME의 이름이 바뀌더라도 일일이 이름들을 바꿀필요없이 define부분만 고치면 된다.
	printf("Input radius\n");		//JARVIS에서 FRIDAY로 AI의 이름을 바꾸려면 어떻게 해야할까?

	scanf("%f", &radius);	//반지름을 입력

	area = PI * radius * radius; // area = pi * r * r  원의 넒이를 계산
	circum = 2.0f * PI * radius;	//circum = 2.0 * pi * r  원 둘레 계산

	printf("Area is %f\n", area);	
	printf("Circum is %f\n", circum);	//계산 결과 출력!

	//TODO: wrong usage, strings, const

	return 0;
}