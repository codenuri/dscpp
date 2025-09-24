#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a, int b) : x{ a }, y{ b } {}
	// 객체지향 언어의 문법을 정확히 이해 하려면 항상 "this" 가 핵심

	void set(int a, int b) // void set(Point* this, int a, int b)
	{						// {
		x = a;				//		this->x = a; 로 변경	
		y = b; 
	}
	// 핵심 : static 멤버 함수는 인자로 this 추가 안됨.
	static void goo(int a)	// void goo(int a)
	{						// {
		x = a;				//		this->x = a; 가 되어야 하는데
	}						//			이안에는 this가 없습니다.
							//			그래서 에러. 
};
int main()
{
	Point p{ 1, 2 };
	p.set(10, 20);	// set(&p, 10, 20)

	Point::goo(10); // 전달한 객체가 없습니다.
	p.goo(10);		// 이렇게 호출할수도 있지만, 객체전달 안됩니다.
					// 그냥, Point::goo(10) 과동일. 
}

