// 2_복사생성자1.cpp
#include <iostream>

// 124 page ~ 

class Point
{
	int x, y;
public:
	Point()				: x{ 0 }, y{ 0 } {} // 1
	Point(int a, int b) : x{ a }, y{ b } {} // 2

	// 복사 생성자 : 인자로 자신과 동일한 타입의 객체를 받는 생성자
	// => 사용자가 만들지 않으면 컴파일러제공.
	// => 아래와 동일한 모양(모든 멤버데이타를 그대로 복사)
	Point(const Point& other) : x{other.x}, y{other.y}
	{
	}
};
int main()
{
	// 아래 코드에 대해서 생각해 봅시다.
	Point p1;			// 1번 생성자 호출
//	Point p2{ 1 };		// error. 인자가 int 한개인 생성자는 없다.
	Point p3{ 1,2 };	// 2번 생성자 호출

	Point p4{ p3 };	// ok. 컴파일러가 만들어 주는 "복사 생성자" 사용

	Point p5 = p4;	// ok. 복사 생성자 호출
}






