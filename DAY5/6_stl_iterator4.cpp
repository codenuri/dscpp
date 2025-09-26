// 5_반복자1
#include <iostream>
#include <vector>
#include <list>

int main()
{
//	std::list<int>   c = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> c = { 1,2,3,4,5,6,7,8,9,10 };

	// 컨테이너 모든 요소 열거하는 방법
	// 1. range - for 문, 모든 컨테이너 가능, C++11 부터
	// => 가장 좋은 코드, 모든 요소 열거
	for (auto e : c)
	{

	}
	// 2. 반복자 사용, 모든 컨테이너 사용가능
	// => 아래 코드에서 p1 은 포인터와 유사게 사용가능	

	auto p1 = c.begin();
		
	for (int i = 0; i < 3; ++i)
	{
		std::cout << *p1 << std::endl;
		++p1;
		
	}

	// 3. [] 연산자 사용 - vector, deque만 가능, list 안됨
	for (int i = 0; i < c.size() ; ++i)
	{
		c[i] = 0; // list 안됨
	}
}

