
#include <iostream>

// 객체지향 프로그래밍의 핵심
// => 필요한 타입을 먼저 설계하자는 것.

// 사각형이 필요하는 "Rect" 타입을 먼저 설계하자
// => C의 struct 사용

struct Rect
{
	int left;
	int top;
	int right;
	int bottom;
};

int getRectArea(Rect rc)
{
	return (rc.right - rc.left) * (rc.bottom - rc.top);
}

void drawRect(Rect rc)
{
	std::cout << "draw rect" << std::endl;
}

int main()
{
	Rect rc = { 1,1, 10,10 };

	int n1 = getRectArea(rc);
	drawRect(rc);
}