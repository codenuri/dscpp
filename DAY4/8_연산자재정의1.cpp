//  연산자재정의 - 163 page
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int x = 0, int y = 0) : x(x), y(y) {}

	void print() const 	{ std::cout << x << ", " << y << std::endl;	}
};

int main()
{
	Point p1{1, 1};
	Point p2{2, 2};

	// 사용자 정의 타입에 대해서 덧셈을 생각해 봅시다.
	// => 현재는 에러
	// => 되게 하려면 약속된 함수 2개중 한개를 만들어야 합니다.
	Point p3 = p1 + p2;   
	//       = operator+(p1, p2);  // non-member 함수
	//       = p1.operator+(p2);   // member 함수	
}

