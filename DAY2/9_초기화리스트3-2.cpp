#include <iostream>

class Point
{
	int x, y;
public:
	// 참고 : 멤버 데이타 이름과 인자 이름이 같아도 초기화 리스트 에서 사용시
	//        아무 문제 없음.
	Point(int x, int y) : x{ x }, y{ y } {}
};

// 디폴트 생성자가 없는 타입이 멤버 데이타로 있을때 해결책 총정리
class Circle
{
	// 해결책 #1. 멤버데이타에서 {}를 사용해서 생성자 인자값 전달
	// => C++11 부터 가능
	// => ()는 안됨, {} 만 가능
	// => 생성자 인자값이 아닌 리터럴 같은 것으로 초기화 할때 사용
	Point center{ 0, 0 };
//	Point center(0, 0); // error. most vexing parsing problem(가장 성가신 파싱문제)
						// 컴파일러가 이 코드를 함수의 선언으로 해석
						// 컴파일러가 "파싱을 잘못한다" 는 의미로
						// "가장 성가신 파싱 문제" 라고 부릅니다.
public:
	// 해결책 #2. Circle 생성자의 초기화 리스트에서
	// => 0, 0 이 아닌 사용자가 전달한 값으로 초기화 하고 싶을때
	Circle(int x, int y) : center{ x, y } {}
};

int main()
{
	Circle c{ 1, 1 };
}


