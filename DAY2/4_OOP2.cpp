
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

int getRectArea(int left, int top, int right, int bottom)
{
	return (right - left) * (bottom - top);
}

void drawRect(int left, int top, int right, int bottom)
{
	std::cout << "draw rect" << std::endl;
}

int main()
{
	int n1 = getRectArea(1, 1, 10, 10);
	drawRect(1, 1, 10, 10);
}