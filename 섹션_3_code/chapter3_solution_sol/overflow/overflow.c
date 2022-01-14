#include <stdio.h>
#include <limits.h> //라이브러리는 값의 최대치를 보여주는 라이브러리이다.
#include <stdlib.h>

/*
int main()
{
	unsigned int i = 0b11111111111111111111111111111111; //2진수로 unsigned int가 할당받을수있는 가장 큰수를 표현
	//0b의 의미는 binary로 수를 표현했다는 의미

	unsigned int u = UINT_MAX;//UNIT_MAX는 매크로로서 해당 문구를 넣으면 unsigned int의 최댓값을 출력해줌

	//int형의 매크로는 INT_MAX이다. 반대로 최솟값은 MAX를 MIN으로 바꿔주면 됩니다. 근데 unsigned int는 최솟값이 '0'이라 매크로가 없습니다.
	//자세한건 매크로 부분에 우클릭 -> go to definition해서 알아보자

	printf("%u\n", i); //이걸 출력하면 4294967295가 나온다. 이는 2^32 = 4,294,967,296에서 가장 큰수를 의미한다.

	//저건 가짓수를 의미하기에 '0'을 포함해서 4,294,967,296가 나온거고 이중에서 가장 큰수는 1을 뺀 4,294,967,295이다.
	printf("%u\n", u); //이것도 4294967295가 나옵니다.

	//항상 내가 출력하고자하는 데이터의 자료형에맞는 형식지정자(%d, %u, %i 등등)를 사용할것


	sizeof(unsigned int); //sizeof함수에 자료형이나 변수를 넣으면 메모리 크기를 알려준다.

	sizeof(i); //마우스를 가져다대면 unsigned int는 4U(4byte)라고 나오고, i 또한 4U가 나온다.

	//이는 컴파일러가 알려주는게 아니라 VS가 알려주는 것

	printf("%u\n", sizeof(unsigned int));
	printf("%u", sizeof(i)); //이렇게 printf를 사용하여 직접 확인해보자

	return 0;
}
*/

//overflow 발생시켜보기
int main()
{
	unsigned int u_max = UINT_MAX + 1;// + 1말고 0 - 1로도 해볼것

	char buffer[33];//문자를 33개의 메모리에 나란히 저장하는 배열을 선언
	_itoa(u_max, buffer, 2);//u_max가 담고있는 숫자를 2진수로 바꿔주는 코드

	printf("decimal: %u\n", u_max);
	printf("binary: %s\n", buffer);//buffer를 2진수 형태로 출력

	//결과는 1111 1111 1111 1111 ~ 에서 1을 더하면 자릿수가 1개더 늘어나면서 그 다음수가 출력되야하지만
	//늘어난 자릿수의 1은 잘리고 뒤에 0000 0000 0000 0000 ~ 만 인식되어서 '0'으로 출력된다.
	//이게 오버플로우인데 자료형이 표현할수있는 자릿수보다 늘어난 자릿수는 자르고 표현가능한 부분만 표현한다.
	// 1111 + 1 = 10000 이지만 0000만 표현

	//반대로 가장 작은 수(여기서는 0)에서 -1을 하면 자료형이 표현할수있는 수에서 가장 큰수가 나온다.
	// 0000 - 1 = 1111로 표현하는 것과 같음

	return 0;
}