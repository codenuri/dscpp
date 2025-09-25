#include <iostream>

class Point
{
	int x, y;
public:
	Point(int a, int b) : x{ a }, y{ b } {}
};

void set_pixel(int x, int y) {}

void draw_line(const Point& from, const Point& to) {}

int main()
{
	// 1, 2 에 점을 출력하는 방법

	// #1. 변수를 만들어서 인자로 전달
	int x = 1;
	int y = 2;
	set_pixel(x, y);

	// #2. 리터럴 형태로 전달 => 당연히 좋은 코드!!
	set_pixel(1, 2);



	//-------------------------
	// (1,1) ~ (2,2) 에 선을 그려 보세요
	Point from{ 1,1 };
	Point to{ 2,2 };

	draw_line(from, to); // 이렇게 하면 함수 호출이 종료되어도
						// from, to 는 메모리에 계속 존재
						// 선언된 블럭을 벗어날때 파괴!

	draw_line(Point{ 1,1 }, Point{ 2,2 }); // 인자를 temorary 형태로 전달
											// 함수 호출이 종료되면
											// 즉시 파괴

}





