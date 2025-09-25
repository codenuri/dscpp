//  연산자재정의 - 163 page
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int x = 0, int y = 0) : x(x), y(y) {}

	void print() const { std::cout << x << ", " << y << std::endl; }

	friend Point operator+(const Point& p1, const Point& p2);
};

Point operator+(const Point& p1, const Point& p2 )
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
	//       = operator+(p1, p2);  

	p3.print();

	// 아래 처럼 직접 호출도 가능
	Point p3 = operator+(p1, p2);
}

