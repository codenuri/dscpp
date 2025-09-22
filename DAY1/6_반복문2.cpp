#include <iostream>
#include <range> // C++20 에서 추가된 헤더

// C++언어 버전 : C++20 이상 으로 해야 합니다.
int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };

//	for (auto e : x)	// 전체 열거
	for (auto e : std::view::reverse(x) )	// 거꾸로 열거
	{
		std::cout << e << std::endl;
	}
}
