//  연산자재정의 - 163 page
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int x = 0, int y = 0) : x(x), y(y) {}

	void print() const { std::cout << x << ", " << y << std::endl; }


	// 멤버 함수로 만드는 operator+ 함수
	// + 는 이항 연산자 이지만 멤버로 만들면 인자는 한개
	// 주의 ! : p1 + p2에서 p1 이 const 라도 + 가능해야 합니다. "상수멤버함수로"
	Point operator+(const Point& pt) const 
	{
		std::cout << "member operator+\n";
		Point tmp{ x + pt.x, y + pt.y };
		return tmp;
	}
};
int main()
{
//	const Point p1{ 1, 1 }; // 이 경우도 + 가능해야 합니다.
	Point p1{ 1, 1 };
	Point p2{ 2, 2 };

	Point p3 = p1 + p2;
	//       = p1.operator+(p2);   // member 함수	
	
	p3.print();
}

