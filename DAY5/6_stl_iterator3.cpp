#include <iostream>
#include <vector>
#include <list>

int main()
{
	std::list<int>   s = { 1,2,3,4,5,6,7,8,9,10 };
	
	// 1. past the end

	auto p1 = s.begin(); // 1 번째 요소를 가리키는 반복자
	auto p2 = s.end();   // 마지막 다음 요소를 가리키는 반복자
						 // (유효하지 않은 메모리)
						 // 절대로 * 연산하지 마세요.
	*p1 = 10; 
//	*p2 = 10;  // 잘못된 메모리 참조.. 

	// p2의 용도는 p1 이동시, 끝에 도달했는가 판단을 위한것
	// => 아래 경우처럼만 사용하세요
	while (p1 != p2)
	{
		std::cout << *p1 << std::endl;
		++p1;
	}
}