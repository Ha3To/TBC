#include <stdio.h>
#include <string.h>	//strlen을 사용하기위한 헤더파일
#include <stdlib.h>	//malloc을 사용하기위한 헤더파일

								//=====================================
								//sizeof와 strlen의 차이를 알아보는 코드|
								//=====================================

int main()
{
	char str1[100] = "Hello";
	char str2[] = "Hello";
	char str3[100] = "\0";
	char str4[100] = "\n";
														//		결과
	printf("%zu %zu\n", sizeof(str1), strlen(str1));	//	100		 5 -> strlen은 유효한 문자만 카운트하여 사용자에게 알려줌
	printf("%zu %zu\n", sizeof(str2), strlen(str2));	//	  6		 5
	printf("%zu %zu\n", sizeof(str3), strlen(str3));	//	100		 0
	printf("%zu %zu\n", sizeof(str4), strlen(str4));	//	100		 1 -> 빈칸은 유효한 문자이기때문에 카운트!

	/* Extra */
	char *str5 = (char*)malloc(sizeof(char) * 100);
	str5[0] = 'H'; str5[1] = 'e'; str5[2] = 'l'; str5[3] = 'l'; str5[4] = 'o';
	str5[5] = '\0';
	printf("%zu %zu\n", sizeof(str5), strlen(str5));

	return 0;
}