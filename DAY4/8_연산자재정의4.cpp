//  연산자재정의 - 163 page
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int x = 0, int y = 0) : x(x), y(y) {}

	void print() const { std::cout << x << ", " << y << std::endl; }


	Point operator+(const Point& pt) const
	{
		std::cout << "member operator+\n";
		Point tmp{ x + pt.x, y + pt.y };
		return tmp;
	}

	friend Point operator+(const Point& p1, const Point& p2);
};

Point operator+(const Point& p1, const Point& p2)
{
	std::cout << "non-member operator+()\n";

	Point tmp{ p1.x + p2.x, p1.y + p2.y };
	return tmp;
}


int main()
{
	Point p1{ 1, 1 };
	Point p2{ 2, 2 };

	Point p3 = p1 + p2;

	p3.print();

	// 연산자 재정의 
	// #1. 4개 빼고 모든 연산자 재정의 가능
	// => .   ?:   ::  .* 

	// #2. 2가지 형태로 재정의 가능
	// => 멤버 함수
	// => 멤버가 아닌 함수

	// #3. 아래 4개는 멤버만 가능
	// =>  =,  (),  [],  * 
	
	// => 그 외에는 멤버, 일반 모두 가능.

	// #4. 멤버가 좋을 까요 ? 일반 함수가 좋을까요 ?

	// 자신의 상태가 변경되는 연산자 : 멤버가 좋다.		   (ex) a += 2;
	// 자신의 상태가 변경되지 않은 연산자 : 비 멤버가 좋다. c = a + b


	int n = 3;

	Point p4 = p1 + p2; // 
	Point p5 = p1 + n;
	Point p6 = n  + p1;


}

