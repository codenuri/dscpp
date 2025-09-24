// 선언과 구현의 분리

// 상수멤버함수1.cpp    105 page ~
#include <iostream>

// const member function
// => 너무나 중요한 문법.
// => 그런데, 많은 C++ 개발자가 제대로 이해하지 못하고 있는 문법

class Point
{
public:
	int x, y;

	Point(int a, int b) : x{ a }, y{ b } {}

	void set(int a, int b) { x = a; y = b; }

	// 핵심 : 상수 멤버 함수 만들때는 "선언과 구현" 에 모두 const를 표기
	//        해야 합니다.

	// 어떤 문법의 키워드가 "선언만 표기" 하는지 "선언과 구현에 모두표기"
	// 하는 지를 정확히 정리해 두세요..
	void print() const;
};

void Point::print() const
{

	std::cout << x << ", " << y << std::endl;
}

int main()
{
	const Point p{ 1, 2 };

	p.set(10, 20);
	p.print();		
}
