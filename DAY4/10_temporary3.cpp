#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a, int b) { std::cout << "Point()" << std::endl; }
	~Point() { std::cout << "~Point()" << std::endl; }
};
//------------------------------------------------
// 
// 함수 인자와 복사본 객체
/*
void f1(Point  pt) {} // call by value     : 복사본 생성, 복사본 이름 pt
void f2(Point& pt) {} // call by reference : 복사본 생성 안됨. 

int main()
{
	Point p{ 0, 0 };

	f1(p);
	f2(p);
}
*/
//----------------------------------------------
// 함수 반환값과 복사본 객체(temporary)

Point pt{ 1, 2 };

Point foo() 
{
	return pt; 
}

int main()
{
	foo();
}


