#include <iostream>
// 핵심 : 타입을 만들때
//		  상태를 나타내는 데이타와 상태를 가지고 연산을 수행하는 함수를
//        묶어서 타입을 만들자!

// C   struct  : 함수를 넣을수 없다.
// C++ struct  : 함수를 넣을수 있다. 

struct Rect
{
	// 멤버 데이타(사각형의 상태를 표현)
	int left;
	int top;
	int right;
	int bottom;

	// 멤버 함수(사각형 관련 연산제공)
	// => 멤버함수에서는 멤버 데이타 접근 가능
	int getRectArea()
	{
		return (right - left) * (bottom - top);
	}

	void drawRect()
	{
		std::cout << "draw rect" << std::endl;
	}
};

int main()
{
	Rect rc = { 1,1, 10,10 };

	// 객체지향 스타일
	int n1 = rc.getRectArea();
	rc.drawRect();

	// C언어 스타일
//	int n1 = getRectArea(rc);
//	drawRect(rc);
}