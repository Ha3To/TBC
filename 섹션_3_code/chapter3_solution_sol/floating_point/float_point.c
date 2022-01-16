#include <stdio.h>
#include <float.h>
#include <math.h>

/*
int main()
{
	printf("%u\n", sizeof(float));			// 이걸 출력해보면 double이랑 ldouble이랑 값이 똑같은데
	printf("%u\n", sizeof(double));			// 그 이유는 표준에서 long double은 double정도의 정밀도만 가지고있으면된다고 정했기 때문
	printf("%u\n", sizeof(long double));	// 다만 이건 VS에서만 gcc에서는 double은 8, long double은 12이다.

	float f = 123.456f;						// float은 숫자 뒤에 리터럴(f)를 붙여야 에러가 안생김
	double d = 123.456;						// double은 숫자만 써도 됩니다.

	float f2 = 123.456;						// 
	double d2 = 123.456f;					// 

	int i = 3;
	float f3 = 3.f;							// 3.0f
	double d3 = 3.;							// 3.0

	float f4 = 1.234e10f;					// 과학적 표기법으로 표기

	float f5 = 0xb.aP1;						// 16진수로 작성
	double d5 = 1.0625e0;					// 16진수로 작성

	printf("%f %F %e %E\n", f, f, f, f);	// e 혹은 E로 출력할경우 과학적 표기법으로 출력됨
	printf("%f %F %e %E\n", d, d, d, d);
	printf("%a %A\n", f5, f5);				// a 또는 A로 출력할경우 16진수로 출력됩니다.
	printf("%a %A\n", d5, d5);

	return 0;
}
*/

// 부동 소수점의 한계
int main()
{
	// round-off errors (ex1) 다만 이번 예시는 반올림에서 문제가 생기는것이 아닌 부동소수점이 메모리를 사용하는 구조에 의한 에러이다.
	/*
	float a, b;
	a = 1.0E20f + 1.0f;	// 이렇게 출력을 해보면 값이 0이 나온다, 근데 분명 1.0f를 더했는데 0이나오는 이유는
	b = a - 1.0E20f;	// 너무 큰수에 작은수를 더하면 작은수는 그냥 없어지기 때문
	printf("%f\n", b);	// 그래서 연산을 할 때 범위가 너무 차이 나는 수 간에는 예기치 못한 오류가 생길 수 있다.
	*/


	// round-off errors (ex2)
	/*
	float a = 0.0f;

	for (int i = 0; i < 100; i++)
	{
		a = a + 0.01f;	// 0.01을 100번 더하는 코드 그럼 1이 만들어 질까?
	}

	printf("%f\n", a);	// 이걸 출력해보면 정확하게 1이 나오지 않는다.
						// 그 이유는 정확하게 0.01을 표현할수없고 0.999~776f가 0.01이기때문에 이 차이가 누적되어 1이 만들어 지지 않는다.
						// 그럼 왜 딱떨어지게 못만들까?하면 2진수의 문제인데 특정 숫자들은 맞아떨어지게 값이 나오지 않는다.
	*/

	/*
	// overflow
	float max = 3.402823466e+38F;
	printf("%f\n", max);	// 여기서 출력해주는 숫자들 중에서 유효한 숫자는 6자리까지이다.
	max = max * 100;

	printf("%f\n", max);	// 이걸 출력하면 숫자가 자료형에비해 너무 커서 inf가 출력된다.
							// float을 double로 바꿔주면 정상 출력되긴하지만 double또한 한계가 있다.
	*/

	/*
	// underflow
	float f = 1.401298464e-45F;
	printf("%e\n", f);
	f = f / 2.0f;			// subnormal -> 부동 소수점형의 정밀도로는 표현할수없는 절댓값이 아주 작은 숫자
	printf("%e\n", f);
	*/

	/*
	float f = asinf(1.0f);	// 싸인은 -1 ~ 1의 범위를 갖는다.
	printf("%f\n", f);	// 여기서는 정상적인 출력이 나오지만

	f = asinf(2.0f);
	printf("%f\n", f);	// 여기서는 -nan(not a number)이라고뜨는데 싸인함수가 2.0을 갖는건 불가능하기 때문이다.
	*/

	return 0;
}