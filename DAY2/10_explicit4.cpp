#include <iostream>

class Point
{
public:
	Point(int a, int b) { std::cout << "Point(int, int)\n"; }
};

int main()
{
	// 아래 2줄이 동일한 생성자를 호출하는 것을 실행해서 확인하세요
	Point p1(0, 0);
	Point p2{0, 0};
}