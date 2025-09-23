#include <iostream>
// 핵심 : 타입을 만들때
//		  상태를 나타내는 데이타와 상태를 가지고 연산을 수행하는 함수를
//        묶어서 타입을 만들자!

// C   struct  : 함수를 넣을수 없다.
// C++ struct  : 함수를 넣을수 있다. 


// 함수를 구조체 안에 넣어서 얻는 장점은 뭡니까 ?
// 1. 함수 인자로 데이타를 받을필요 없으므로 간결해 진다
// 2. 사용하는 코드도 "함수중심" 이 아닌 "데이타(변수, 객체)"중심

// 3. 다양한 객체지향 문법을 사용해서 "안전한 타입(Rect)" 를 만들수 있다
//    => 앞으로 계속 설명



struct Rect
{
	// 멤버 데이타(사각형의 상태를 표현)
	int left;
	int top;
	int right;
	int bottom;

	// 멤버 함수(사각형 관련 연산제공)
	// => 멤버함수에서는 멤버 데이타 접근 가능
	int getArea()
	{
		return (right - left) * (bottom - top);
	}

	void draw()
	{
		std::cout << "draw rect" << std::endl;
	}
};

int main()
{
	Rect rc = { 1,1, 10,10 };

	// 객체지향 스타일
	int n1 = rc.getArea();
	rc.draw();

	// C언어 스타일
//	int n1 = getRectArea(rc);
//	drawRect(rc);
}