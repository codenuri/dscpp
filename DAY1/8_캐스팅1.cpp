// 10_캐스팅1.cpp    49 page
#include <iostream>

// C 스타일 () 캐스팅 
// => 아주 막강한 능력이 있다.
// => 그런데, 코드에 의도가 드러나지 않는다.
// => 그래서, 실수 인지 의도인지 알수 없을때가 많다.
int main()
{
	int n = 3;

	// int* => double* 로의 형변환
//	double* p = &n; // error. 암시적 변환 안됨
	double* p = (double*)&n; // ok

	*p = 3.4; // 이 경우의 메모리를 생각해 보세요

}
