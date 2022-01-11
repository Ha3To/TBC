#include <stdio.h>

int main()
{
	int x; // declaration, 사용자가 정수 하나를 담을만한 공간을 확보했고 그걸 x로 접근하겠다
	int y; // 변수이름은 사용자가 원하는대로 지을수있다
	int z; // 변수이름에는 대소문자, _, 숫자 사용가능
		   // 다만 숫자로 시작하는 이름은 안됨, 띄어쓰기도 안됨, 특수기호 안됨, 기존에 정해진 이름도 변수명으로 안됨

	x = 1; // assignment x(메모리 공간)에 1을 할당해라
	y = 2;

	z = x + y;

	// printf = print formatted
	printf("The answer is %d\n", z); // %d = decimal format, %
	printf("The answer is %i, %i", z, 1+2); // %i = integer format, %
	// 이런식으로 '형식'을 맞춰져야 원하는 문자 혹은 숫자들이 출력된다.
	// 실행시켜보면 두개의 printf가 같은 문장을 출력한다.
	// 이건 보너스로 \a 를 printf해보면 경고음을 들려준다.
	

	return 0;
}