#include <iostream>
#include <initializer_list>

class Point
{
public:
	// 생성자 고급 기술
	// => std::initializer_list 를 인자로 받으면 {} 초기화와
	//    () 초기화를 다르게 구현 가능
	Point(int a, int b) { std::cout << "Point(int, int)\n"; }
	Point(std::initializer_list<int> e) { std::cout << "Point(std::initializer_list)\n"; }
};

int main()
{
	// 아래 2줄이 동일한 생성자를 호출하는 것을 실행해서 확인하세요
	Point p1(0, 0);
	Point p2{0, 0}; // 1. 인자로 "std::initializer_list" 있으면 우선사용
					// 2. 1이 없으면 Point(int, int) 사용

	// 대부분의 타입은 ()과 {} 를 동일하게 동작하게 만들었습니다.
	// 그런데, vector, list 등은 다르게 동작하게 만들었습니다
}