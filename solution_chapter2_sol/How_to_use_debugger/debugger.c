#include <stdio.h>

void say_hello(void);

//코드 줄 번호 좌측에 마우스를 가져다대면 동그란 버튼이 나오는데 그걸 클릭하고 F5(디버깅)를 누르면
//빨간 버튼이 있는 위치까지만 실행한다. 이어서 F11을 누르면 그 다음줄을 실행한다. F10을 누르면 실행만하고 지나간다.

int main()
{
	int x, y, z;

	x = 1;
	y = 20;
	z = 3;

	z = x + y;

	say_hello();//함수부분에서 F10(step_over)을 누르면 함수 정의부분으로가서 살펴보지않고 실행만하고 지나감

	return 0;
}

void say_hello(void)
{
	int x = 1;
	x = 10;

	printf("Hello, World!\n");

	return;
}