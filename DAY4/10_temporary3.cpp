#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a, int b) { std::cout << "Point()" << std::endl; }
	~Point() { std::cout << "~Point()" << std::endl; }
};
//------------------------------------------------
// 함수 인자와 복사본 객체
void f1(Point  pt) {}
void f2(Point& pt) {}

int main()
{
	Point p{ 0, 0 };
	f1(p);
	f2(p);
}
//----------------------------------------------



Point pt{ 1, 2 };

Point foo() 
{
	return pt; 
}




