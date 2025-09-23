#include <iostream>

class Point
{
public:
	int x, y;

	// 초기화 리스트는 "진짜 초기화" 입니다.
	// 초기화 리스트의 코드 순서가 아닌
	// 멤버 데이타가 선언된 순서로 초기화
	// => 아래 코드는 "B" 먼저 실행..  잘못된 코드
	// 
	//		  A      B
//	Point() : y(0), x(y)
	Point() : x(0), y(0)	// <== 되도록 멤버가 선언된 순서로 초기화
	{
	}
};
int main()
{
	Point pt;
	// 아래 코드 결과 예측 하세요
	std::cout << pt.x << std::endl; // ?
	std::cout << pt.y << std::endl; // ?
}




