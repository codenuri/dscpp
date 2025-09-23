#include <iostream>

// member field initialization
// => C++11 부터 필드에 직접 초기값 가능합니다.
class Point
{
	int x = 0;
	int y{ 0 }; // 권장
public:
	Point() {}
	Point(int a) : y{ a } {}
};
// 위 코드는 컴파일 하면 아래 코드로 변경됩니다
class Point
{
	int x;   // = 0;
	int y;   //  { 0 }; // 권장
public:
	// 필드 초기화 때문에 생성자가 아래 코드로 변경
	Point()      : x{ 0 }, y{ 0 }  {}
	Point(int a) : x{ 0 }, y{ a } {}
};


int main()
{
	Point pt;
}




