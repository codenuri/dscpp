#include <iostream>

// this 이야기 - 97 page
// => 멤버 함수 호출의 원리 
class Point
{
	int x;
	int y;
public:
	// 사용자 코드			// 컴파일러가 변경한 코드
	void set(int a, int b)  // void set(Point* this, int a, int b)
	{						// {
		x = a;				//		this->x = a;
		y = b;				//		this->y = b; 라고 컴파일 됩니다.

		// this : 현재 멤버함수를 호출할때 사용한 객체의 주소
		std::cout << this << std::endl;
	}
};
int main()
{
	Point p1;
	Point p2;
	std::cout << &p1 << std::endl;
	std::cout << &p2 << std::endl;
	p1.set(10, 20);	// 컴파일러가 set(&p1, 10, 20) 으로 변경
	p2.set(10, 20); // 컴파일러가 set(&p2, 10, 20) 으로 변경
}