// 10_캐스팅1.cpp    49 page
#include <iostream>

// C 스타일 () 캐스팅 
// => 아주 막강한 능력이 있다.
// => 그런데, 코드에 의도가 드러나지 않는다.
// => 그래서, 실수 인지 의도인지 알수 없을때가 많다.

int main()
{
	const int c = 10;

	int* p = &c; // ????

	*p = 20; 

	// 아래 결과 예측해 보세요
	std::cout << c << std::endl;
	std::cout << *p << std::endl;

}
