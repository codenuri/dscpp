// 6_알고리즘1
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

// 200 page ~
int main()
{
	std::list<int>   s = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// 컨테이너에서 3을 찾고 싶다.
	
	// 방법 1. 멤버함수 find를 제공하자.
	// 장점 : 사용법이 쉽다. 대부분의 언어에서 제공하는 스타일.
	// 단점 : 모든 컨테이너에 find 가 필요한다. - C++은 이것이 싫었다
//	s.find(3);
//	v.find(3);
	
	
	// 방법 #2. 모든(대부분)의 컨테이너에서 사용가능한
	// => 멤버가 아닌 일반 함수(template) 으로 제공

	// 장점 : 
	// 단점 :

	std::find(v.begin(), v.end(), 3);
	std::find(s.begin(), s.end(), 3);

}