#include <stdio.h>
#include <complex.h>

int main()
{
	_Dcomplex z;		// _Dcomplex = double타입의 복소수, f와 ld도 있음
	z._Val[0] = 1.0;
	z._Val[1] = 1.0;

	return 0;
}