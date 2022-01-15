#include <stdio.h>

int main()
{
	char c = 'A';
	char d = 65;	// d = 'A'

	printf("%c %hhd\n", c, c);	//두개의 printf다 문자로 출력과 정수로 출력코드(ASCII에서 해당 문자와 대응하는 정수)가 있다.
	printf("%c %hhd\n", d, d);	//출력해보면 A 65로 똑같다.

	char a = '\a';		// \가 들어가는 것은 escape syquence로 어떤 행위를 해준다.
	printf("%c", a);	// \a의 경우는 띵동하고 벨을 울려준다.

	printf("\07"); // 이건 위 띵동하고 울리는 벨에 대응하는 정수(8진수)이다.
	printf("\x7"); // 이건 16진수 벨

	float salary;
	printf("$______");
	printf("$______\b\b\b\b\b\b");	// \b는 backspace효과를내는 escape syquence다.
	scanf("%f", &salary);		// 이걸 실행하면 $______에서 $다음 칸에 커서가 오는데 거기서부터 입력을 받고
					// _를 지워버린다.

	printf("AB\tCDEF\n");	// \t는 tap의 효과를 내준다.
	printf("ABC\tDEF\n");	// 출력해보면 \t이후 CDEF와 DEF의 줄을 맞춰준다.

	printf("\\ \'HA+\' \"Hello\" \?\n");	// \ + 기호를 넣으면 해당 기호를 문자로 출력한다는 의미

	return 0;
}
