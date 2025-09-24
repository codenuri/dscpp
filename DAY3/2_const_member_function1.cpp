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

	// 상수 멤버 함수란 ?
	// => 멤버 함수 () 뒤에 const 를 붙이는 문법
	// => "상수 객체라고 호출 가능하게 해달라는 것"
	// => 핵심 : 상수 객체는 상수 멤버 함수 만 호출할수 있다.
	// => 특징 : 상수 멤버함수 안에서는 멤버 값 변경할수 없다.

	void print() const 
	{	
//		x = 10; // error. 상수 멤버함수 안에서는 멤버 값 변경할수 없다.

		std::cout << x << ", " << y << std::endl;
	}
};

int main() 
{
	// 핵심 : 객체가 상수 입니다.
	const Point p{ 1, 2 };

	// 아래 코드를 생각해 봅시다.
	p.x = 10;		// error. public 이지만 상수 객체이므로
	p.set(10, 20);	// error.
	p.print();		// error.
					// 단, print() 가 상수멤버 함수라면 ok
}

