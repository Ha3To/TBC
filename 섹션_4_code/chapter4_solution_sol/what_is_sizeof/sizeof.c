#include <stdio.h>
#include <stdlib.h>	// malloc()

struct MyStruct
{
	int i;
	float f;
};

int main()
{
	/* 1. sizeof basic types */

	// sizeof 사용법
	int a = 0;
	unsigned int int_size1 = sizeof a;		//변수명을 ()없이 입력
	unsigned int int_size2 = sizeof(int);	//변수의 '자료형'을 입력
	unsigned int int_size3 = sizeof(a);		//()안에 변수명을 입력
	// 3가지 형태 전부 같은 값을 출력합니다.

	size_t int_size4 = sizeof(a);			//size_t = unsinged int
	size_t float_size = sizeof(float);		//size_t를 쓰는 이유는 다른 시스템에서 sizeof가 알려주는 값이 ui가 아닐수도 있어서

	printf("size of int type is %u bytes.\n", int_size1);		//%u = unsigned 형식지정자
	printf("size of int type is %zu bytes.\n", int_size4);		//%zu = size_t 형식 지정자
	printf("size of float type is %zu bytes.\n", float_size);

	/* 2. sizeof arrays */

	int int_arr[30];	// int_arr[0] = 1024; ...
	int *int_ptr = null;
	int_ptr = (int*)malloc(sizeof(int) * 30);	// int_ptr[0] = 1024; ...

	printf("size of array = %zu bytes\n", sizeof(int_arr));
	printf("size of pointer = %zu bytes\n", sizeof(int_ptr));

	/* 3. sizeof character array */

	char c = 'a';
	char string[10];	// maximally 9 character + '/0' (null charcter)

	size_t char_size = sizeof(char);
	size_t str_size = sizeof(string);

	printf("size of char type is %zu bytes\n", sizeof(char_size));
	printf("size of string type is %zu bytes\n", sizeof(str_size));

	/* 4. sizeof structure */

	printf("%zu\n", sizeof(struct MyStruct));

	return 0;
}