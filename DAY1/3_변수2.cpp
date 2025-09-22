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
	// => "중괄호 초기화(brace-init)" 이라고도 합니다.
	int n2 = { 10 };
	int x2[3] = { 1,2,3 };
	Point p2 = { 1,2 };

	// = 이 없어도 됩니다.
	int n3 { 10 };
	int x3[3] { 1,2,3 };
	Point p3 { 1,2 };

	// direct(직접) initialization : = 이 없는 경우
	// copy(복사)   initialization : = 이 있는 경우
	// 
	// => 생성자가 있는 경우는 약간의 차이가 있지만
	// => 위 3개의 경우는 차이 없음.(생성자 없으므로)
}



