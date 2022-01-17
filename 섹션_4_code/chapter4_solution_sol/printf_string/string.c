#include <stdio.h>

int main()
{
	char fruit_name[40]; // stores only one character

	printf("What is your favorite fruit?\n");

	scanf("%s", fruit_name);	// becareful with '&'
								// 형식 지정자로 %s를 사용하면 문자열를 입력받으면 fruit_name에다가 넣어준다.

	printf("You like %s!\n", fruit_name);

	return 0;
}