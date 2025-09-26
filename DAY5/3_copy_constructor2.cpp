// 2_복사생성자1.cpp
#include <iostream>

class Point
{
	int x, y;
public:
	Point()				: x{ 0 }, y{ 0 } {} 
	Point(int a, int b) : x{ a }, y{ b } {} 

	// 복사 생성자는 사용자가 만들지 않아도 컴파일러가 제공합니다.
	// 아래와 동일한 구현..
	// => 예제에서는 언제 호출되는지 확인을 위해 로깅..
	Point(const Point& p) : x{ p.x }, y{ p.y }
	{
		std::cout << "copy ctor" << std::endl;
	}
};

void f1(Point  p) {} 
void f2(Point& p) {} 


Point pt{ 1, 1 };

Point  f3() { return pt; }						  
Point& f4() { return pt; } 

int main()
{
	Point p1{ 1, 2 };

	// 복사 생성자가 사용되는 경우 3가지

	// #1. 객체가 자신과 동일한 타입으로 초기화 될때
//	Point p2 = p1; 
//	Point p3(p1);
//	Point p4{p1};

	// #2. 함수가 call by value 로 객체를 받을때
	f1(p1);
}