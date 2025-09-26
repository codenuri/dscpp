#include <iostream>

// 자동 생성 규칙

class Point
{
	int x, y;
public:
	// 디폴트 생성자 : 사용자가 어떠한 종류의 생성자도 만들지 않으지 않으면
	//				  컴파일러가 제공.
	//                복사 생성자도 "생성자" 의 종류
	// 
	// 디폴트 복사 생성자 : 사용자가 "복사 생성자"를 만들지 않으면
	//					   컴파일러가 제공.

	Point() : x{ 0 }, y{ 0 } {}

	//Point(const Point& p) : x{p.x}, y{p.y}  {}
};

int main()
{
	Point p1;
	Point p2{ p1 };
}