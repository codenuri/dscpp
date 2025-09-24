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

	void print() const
	{
		//	x = 10; 

		std::cout << x << ", " << y << std::endl;
	}
};
int main()
{
	const Point p{ 1, 2 };

	p.set(10, 20);	
	p.print();		
}

