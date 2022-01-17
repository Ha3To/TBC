#include <stdio.h>

int main()
{
	/*int a = 1;
	int int_arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	printf("%i %i %i\n", int_arr[0], int_arr[1], int_arr[9]);*/

	char c = 'a';
	char str1[10] = "Hello";		//"문자열" 이런 식으로 배열 초기화
	char str2[10] = { 'H', 'i' };	//{'H', 'i'}이런 식으로 {}안에 문자 1개씩 구분지어 초기화
									//그리고 문자열의 마지막 칸에는 null값이 들어가는거 인지하고 문자열 만들기

	printf("%c\n", c);
	printf("%s\n", str1);
	printf("%s\n", str2);

	printf("%hhi %hhi %hhi %hhi %hhi\n",
		str2[0], str2[1], str2[2], str2[3], str2[4]);

	//char str3[10] = "Hello, World";	//일부러 선언한 배열의 크기보다 더 많은 문자를 배열에 초기화시킴
										//그래서 배열을 선언할때 충분한 크기의 배열을 선언해줘야 문제가 생기지 않음

	char str3[20] = "Hello, \0World";	//그럼 어떻게 필요한 만큼 선언할 수 있는가 하면 동적할당을 해야함
	printf("%s\n", str3);				//printf가 null값(\0)을 만나면 그 이후에 있는것들은 출력하지 않는다.
										//하지만 메모리에는 해당 값들이 들어가있다.

	return 0;
}