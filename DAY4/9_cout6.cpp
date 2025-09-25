#include <iostream>

// 핵심 : cout 으로 사용자 정의 타입 객체 출력하기 

class Point
{
	int x;
	int y;
public:
	Point(int x, int y) : x{ x }, y{ y } {}

	friend std::ostream& operator<<(std::ostream& o, const Point& pt);
};

std::ostream& operator<<(std::ostream& o , const Point& pt )
{
	// 이제 여기서 o 는 cout 의 별명, cout 과 동일하게 사용가능
	o << pt.x << ", " << pt.y;

	return o;
}

int main()
{
	Point p(1, 2);

	std::cout << p;  // cout.operator<<(p)  는 만들수 없음.
					 // operator<<(cout, p) 는 만들수 있음



}


