#include <stdio.h>

//형식 지정자는 메모리를 얼만큼 어떤 형식으로 읽어들여야하는지를 결정한다.

int main()
{
	float n1 = 3.14;
	double n2 = 1.234;
	int n3 = 1024;

	printf("%f %f %d\n\n", n1, n2, n3);		// %f %f %i도 가능!

	//오류나는 예시들
	printf("%d %d %d\n\n", n1, n2, n3);		// 4, 4, 4 (N, N, N)
	printf("%lld %lld %d\n\n", n1, n2, n3);	// 8, 8, 4 (N, N, Y)	%lld는 8bytes지만 출력형식이 float형이랑 다르기때문에 틀림
	printf("%f %d %d\n\n", n1, n2, n3);		// 8, 4, 4 (Y, N, N)
	printf("%f %lld %d\n\n", n1, n2, n3);	// 8, 8, 4 (Y, N, Y)

	return 0;
}