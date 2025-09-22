#include <iostream>

// 26page - 중요한 변화.!

struct Point
{
	int x, y;
};
int main()
{
	// C/C++98 언어의 초기화의 단점
	// => 변수의 종류에 따라 초기화 방법이 다르다.
	int n1 = 10;
	int x1[3] = { 1,2,3 };
	Point p1 = { 1,2 };

	// C++11 "uniform initialization" 이라는 문법
	// => 모든 종류의 변수는 동일한 방법으로 초기화 할수 있다
	int n2 = { 10 };
	int x2[3] = { 1,2,3 };
	Point p2 = { 1,2 };

}



