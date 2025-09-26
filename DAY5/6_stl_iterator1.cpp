// 5_반복자1
#include <iostream>
#include <vector>
#include <list>

// 192 page ~
int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	// 배열의 시작 주소를 알면 모든 요소를 열거할수 있습니다
	int* p1 = x;
	++p1; // 다음요소로 이동.


	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	// STL 의 모든 컨테이너는 반복자(iterator)라는 것을 사용하면
	// 모든 요소를 ++로 순환 가능
	auto p2 = s.begin();
	++p2; // 다음요소


}