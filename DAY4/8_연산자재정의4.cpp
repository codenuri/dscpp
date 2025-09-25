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

	// 자신의 상태가 변경되는 연산자 : 멤버가 좋다.		   (ex) pt += 2;
	// => 이유, 상태를 변경하는것은 멤버 함수가 좋다.
	// 
	// 자신의 상태가 변경되지 않은 연산자 : 비 멤버가 좋다. c = p1 + pt
	// => 멤버로 만들수 없을때 가 있다.
	// => 아래 코드 참고. 

	int n = 3;
						// 멤버로 만든 다면
	Point p4 = p1 + p2; // p1.operator+(Point)
	Point p5 = p1 + n;  // p1.operator+(int)
	Point p6 = n  + p1; // n.operator+(Point) 가 있으면 되는데.
					    // n 은 int 타입이므로 멤버를 가질수 없다.
						// 즉, 멤버 함수로 만들수 없다.
						// 하지만 멤버가 아닌 함수로는 가능
						// operator+(int, Point) 로 제공


}

