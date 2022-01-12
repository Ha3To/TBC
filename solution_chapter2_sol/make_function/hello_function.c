#include <stdio.h>

void say_hello(void)
{
	printf("Hello, World!\n");
}
//함수를 만들때는 입력값과 출력값이 필요한데 여기서는 둘다 필요없으니 void를 사용했다
//say_hello 함수에 return 0;가 없는 이유는 반환값이 void라서 그렇다.(그냥 return;을 써줘도 상관은 없음)
//함수를 만드는 이유는 특정 기능을 수행하는 코드를 계속해서 써주기보다는 한번만 함수로 만들어서 함수만 call해주면
//간결하게 여러번 사용할수있기때문

//OS는 무조건 main함수를 먼저 찾아서 실행한다는거 인지할것
//그래서 함수를 만들어줄때 main문보다 위에 써줄것!
//즉 나중에 main문은 코드 아래쪽에 위치하게된다.
int main()
{
	say_hello();

	return 0;
}
//또는 함수를 정의해주는 부분(void say_hello(void) 요것만)은 main문 위에 쓰고 = prototyping, function dclration
//main문 아래에 void say_hello(void)를 정의해주면 '링커'가 연결시켜준다. = function definition