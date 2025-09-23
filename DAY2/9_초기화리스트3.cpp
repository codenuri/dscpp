#include <iostream>

class Point
{
	int x = 0, y = 0;
public:
	Point() { std::cout << "Point()" << std::endl; }
	Point(int a, int b)  { std::cout << "Point(int, int)" << std::endl; }
};

// 핵심 
// #1. Rect 객체 생성시, Rect 생성자뿐아니라 멤버데이타인 Point 생성자도 호출.
// #2. 정확한 원리

class Rect
{
	Point ptFrom;
	Point ptTo;
public:
	Rect()
	{
		// 컴파일러가 이 위치에 아래 코드를 추가합니다.
		// => 핵심 : 컴파일러는 항상 멤버데이타의 디폴트 생성자 호출
		// call Point::Point()   <== ptFrom
		// call Point::Point()   <== ptTo   

		std::cout << "Rect()" << std::endl;
	}
};
int main()
{
	Rect r;		// "call Rect::Rect()" 의 기계어 코드 생성
}

// 위코드를 실행시 화면 출력결과 예측



