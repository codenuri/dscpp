// 5_반복자1
#include <iostream>
#include <vector>
#include <list>

int main()
{
//	std::list<int>   s = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> s = { 1,2,3,4,5,6,7,8,9,10 };


	// 1. 반복자의 정확한 타입
	// => 단, 아래처럼 타입 이름을 직접 사용시 컨테이너 변경시
	//    아래 코드도 수정되어야 합니다.
	//std::list<int>::iterator p1 = s.begin();

	// 그래서 auto 권장
	auto p1 = s.begin();
	
}




/*
namespace std
{
	// 반복자 이름은 "표준에서 정의 안함"
	// => 각 컴파일러구현마다 다른 이름 사용
	class list_iterator {};

	// 컨테이너 이름은 표준에서 정의
	// => 컨테이너안에는 자신의 반복자 이름을 가진 iterator 별명있음
	template<typename T>
	class list
	{
	public:
		using iterator = list_iterator;
	};
}
*/