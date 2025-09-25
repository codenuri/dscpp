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
	Point operator+(const Point& pt)
	{
		std::cout << "member operator+\n";

		Point tmp{ x + pt.x, y + pt.y };
		return tmp;
	}
};

int main()
{
	Point p1{ 1, 1 };
	Point p2{ 2, 2 };

	Point p3 = p1 + p2;
	//       = p1.operator+(p2);   // member 함수	
}

