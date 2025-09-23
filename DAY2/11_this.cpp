#include <iostream>

// this 이야기
// => 멤버 함수 호출의 원리 
class Point
{
	int x;
	int y;
public:
	void set(int a, int b)
	{
		x = a;
		y = b;
	}
};

int main()
{
	Point p1;
	Point p2;
	p1.set(10, 20);
	p2.set(10, 20);
}