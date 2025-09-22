// 8_반복문 44 page
#include <iostream>

int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	// 전통적인 for 문
	for (int i = 0; i < 10; i++)
	{
		std::cout << x[i] << std::endl;
	}

	// C++11 에서 추가된 새로운 for 문
	// => "ranged-for" 라고 부릅니다.
	// => x의 위치는 배열, std::vector, std::list 등이 모두 가능
	// 파이썬 : for e in x
	// C#     : foreach var e in x
	
	//for (int e : x)
	for (auto e : x)
	{
		std::cout << e << std::endl;
	}
}
