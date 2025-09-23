// 9_초기화리스트3-2.cpp    3-1 복사
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int a, int b) : x{ a }, y{ b } {}
};

// 디폴트 생성자가 없는 타입이 멤버 데이타로 있을때 해결책 총정리
class Circle
{
	Point center;
public:
	Circle() {}
};
int main()
{
}


