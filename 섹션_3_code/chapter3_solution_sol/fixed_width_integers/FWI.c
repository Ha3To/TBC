#include <stdio.h>
#include <stdint.h>		//고정 너비 자료형들을 담고있는 헤더파일
#include <inttypes.h>	//고정 너비 자료형들의 형식 지정자를 담고있는 헤더파일
						//inttypes.h만 include하면 stdint.h는 include안해도 됩니다.(inttypes.h에 포함되어 있음)

int main()
{
	int i;
	int32_t i32;		// 32 bit integer
	int_least8_t i8;	// smallest 8 bit				//적어도 8bit를 가지고 있는 type
	int_fast8_t f8;		// fastest minimum				//8bit중에서 가장 빠른 type
	intmax_t imax;		// biggest signed integers		//signed int 중에서 가장 큰거
	uintmax_t uimax;	// biggest unsigned integers	//unsigned int 중에서 가장 큰거

	//위 변수들은 어떤 시스템으로 가던 해당 메모리 크기를 '고정'으로 할당받게된다.
	//stdint.h 헤더파일 include해야 위 자료형들 사용가능

	i32 = 1004;

	printf("me32 = %d\n", i32);
	printf("me32 = %" "d" "\n", i32);		//fomatting하는 부분을 쪼개서 작성한 코드
	printf("me32 = %" PRId32 "\n", i32);	//PRI(print) d(decimal) 32(32bit)는 매크로이다.

	return 0;
}