#include <iostream>

// 핵심 : cout 으로 사용자 정의 타입 객체 출력하기 

class Point
{
	int x;
	int y;
public:
	Point(int x, int y) : x{ x }, y{ y } {}
};

int main()
{
	Point p(1, 2);

	std::cout << p ; // cout.operator<<(p)
					 // cout.operator<<(Point) 가 있으면 됩니다.
					 // => 그런데, 표준 라이브러리 코드를 사용자가 수정할수 없으므로
					 //    멤버로 추가할수 없습니다.
					 // 
					// => 해결책 : 멤버 함수가 아닌 일반 함수로 하면됩니다.
					// operator<<(cout, p)       p1 + p2  => operator+(p1, p2)
					// operator<<(std::ostream, Point) 필요
					// 다음소스에서 완성
					
					
					
}


