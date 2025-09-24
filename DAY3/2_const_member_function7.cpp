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

	// 상수객체가 "non-const member function" 을 호출하지 못하는 정확한 이유
	// => 상수 함수는 결국 this 를 만들때 const pointer 로 만들어주는 것
	
	// 생각해 볼 문제
	// => this 를 컴파일러가 추가하지 말고, 아래 주석처럼(python방식)
	//    사용자가 직접 코딩하게 하면, 좀더 이해하기 쉽지 않았을까요 ?
	//    => C++23 부터 유사한 문법이 등장 합니다.(파이썬과 유사)
//	void print()		// void print(Point* this)
	void print() const	// void print(const Point* this)
	{
		//	x = 10;		// this->x = 10 에서 this 는 const 를 가리키므로
						//					컴파일 에러
		std::cout << x << ", " << y << std::endl;
	}
};
int main()
{
	const Point p{ 1, 2 };

	p.set(10, 20);	
	p.print();		// print(&p)	
}

