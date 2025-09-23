#include <iostream>

struct Rect
{
	int left;
	int top;
	int right;
	int bottom;

	int getArea() { return (right - left) * (bottom - top); }
	void draw() { std::cout << "draw rect" << std::endl; }
};
int main()
{
	// #1. 용어 
	int n = 10;		// n 은 "변 하는 수"
	n = 20;			// 그래서 "변수" 라고 합니다.

	Rect r = { 1,1,10,10 };
	// r 은 변하는 수 보다는 "사각형 한개"를 표현
	// => 객체라고 합니다.

	// 객체 : 세상에 존재하는 모든 것들.
	//        r은 메모리에 존재하는 사각형에 대한 표현
	// n 을 변수가 아닌 객체라고 해도 됩니다.

	// 그런데, 관례상
	// primitive(int, double) 를 메모리에 생성한것 : 변수
	// user define type 를 메모리에 생성한것 : 객체


	// #2. 메모리 layout
	// Rect 객체를 여러개 생성하면
	// => 멤버 데이타는 객체당 한개씩 각각 놓이게 됩니다.
	// => 하지만 멤버 함수는 코드메모리에 한개만 있습니다.
	Rect r1 = { 1,1,10,10 }; 
	Rect r2 = { 1,1,10,10 };

	std::cout << sizeof(r1) << std::endl; // 멤버 데이타의 크기만..
	std::cout << sizeof(r2) << std::endl; // 16
}
