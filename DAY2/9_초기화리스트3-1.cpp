#include <iostream>

class Point
{
	int x = 0, y = 0;
public:
//	Point() { std::cout << "Point()" << std::endl; }
	Point(int a, int b) { std::cout << "Point(int, int)" << std::endl; }
};

// 핵심 : Point 에 디폴트 생성자가 없다는 점
// 
// Point p1;      // error
// Point p2(1,1); // ok. 
// 
// 의도 : Point 사용시 반드시 초기값 달라는 것


class Rect
{
	Point ptFrom;
	Point ptTo;
public:
	// #1. 멤버 데이타에 디폴트 생성자가 없는 타입이 있다면(Point)
	// => 아래 Rect 는 에러 입니다.
	// => 컴파일러가 만든 코드 때문입니다. 아래 주석 참고
	/*
	Rect()
	{
		// call Point::Point()   <== ptFrom
		// call Point::Point()   <== ptTo   

		std::cout << "Rect()" << std::endl;
	}
	*/
	
	// #2. 해결책 : 초기화 리스트에 표기
	// => 초기화 리스트의 정확한 의미는 "멤버 데이타의 생성자를 호출하는 방법"
	//    을 컴파일러에게 알려주는 것. () 또는 {} 사용
	Rect() : ptFrom{ 0, 0 }, ptTo{ 1, 1 }
	{
		// call Point::Point(int, int)   <== ptFrom
		// call Point::Point(int, int)   <== ptTo   

		std::cout << "Rect()" << std::endl;
	}

};
int main()
{
	Rect r;
}



