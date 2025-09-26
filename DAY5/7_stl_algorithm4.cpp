// 6_알고리즘1
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

bool foo(int n) { return n % 3 == 0;}

int main()
{
	std::vector<int> v = { 1,2,9,4,3,6,7,3,9,10 };

	// 주어진 구간에서 처음 나오는 "3" 을 찾아라
	auto ret1 = std::find(v.begin(), v.end(), 3);


	// 주어진 구간에서 처음 나오는 "3의 배수" 을 찾아라
	
	// std::find    : 값 검색,   3번째 인자는 값
	// std::find_if : 조건 검색, 3번째 인자는 조건을 담은 함수

	auto ret2 = std::find(v.begin(), v.end(),  foo );

	// 람다 표현식 (C++11 부터)
	// => 함수 인자로 "함수" 를 전달할때
	// => 함수 이름(주소)가 아닌 함수 구현자체를 전달하는 기술
	// => 이름이 없는(익명의) 함수 를 만드는 문법

	// [] : 람다 표현식이 시작됨을 알리는 "lambda introducer"

	auto ret3 = std::find(v.begin(), v.end(), [](int n) { return n % 3 == 0; });

}


