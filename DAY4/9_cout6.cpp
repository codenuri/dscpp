#include <iostream>

// 핵심 : cout 으로 사용자 정의 타입 객체 출력하기 

class Point
{
	int x;
	int y;
public:
	Point(int x, int y) : x{ x }, y{ y } {}
};

? operator<<(? , ? )
{

}

int main()
{
	Point p(1, 2);

	std::cout << p;  // cout.operator<<(p)  는 만들수 없음.
					 // operator<<(cout, p) 는 만들수 있음



}


