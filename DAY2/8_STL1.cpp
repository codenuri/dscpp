#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <stack>

// 우리가 만든 Vector 같은 클래스를 
// 이미 C++ 표준에서 제공합니다.
// => STL 이라고 합니다.
// => 100이상의 타입이 있습니다.

int main()
{
	// #1. 문자열 타입
	std::string s = "ABCD";
	s.push_back("E");

	// #2. 동적 배열
	std::vector<int> v;
	v.push_back(1);

	// #3. linked list
	std::list<int> st;

	// #4. tree
	std::set<int> tree;

	// #5. stack
	std::stack<int> st;
}

// C++ 객체지향 에서 배워야 하는 것

// 1. class 문법으로 미리 만들어진 타입들을 사용하는 사용법
// => C++ 표준 라이브러리 STL
// => GUI 라이브러리중 유명한 QT 
// => 네트워크 라이브러리 ASIO 등....
// => 어렵지 않고, 실제 업무에 제일 도움이 많이 됨


// 2. vector 같은 타입을 만드는데 필요한 문법
// => class 문법
// => 생성자, 접근지정자...
// => 상수함수, static 멤버 등...
// => 1번 보다 어렵고

// 3. vector같은 한개의 타입을 만드는 것이 아닌
// => 프로그램 전체를 객체지향으로 설계
// => 가장 어렵습니다.