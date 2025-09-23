// 6_초기화리스트1    89page ~
#include <iostream>

class Point
{
	int x, y;
public:
	// 생성자에서 멤버 데이타를 초기화 하는 2가지 방법
	Point(int a, int b) : x(a), y(b)    // #1. 멤버 초기화 리스트 문법
	{									//     좋은 방법

		x = a;	// #2. {} 안에서 = 사용. 나쁜 방법
		y = b; 
	}
};

int main()
{
	Point pt{ 0, 0 };
}




