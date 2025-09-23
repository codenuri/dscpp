#include <iostream>

class Point
{
	int x;
	int y;
public:
	// 생성자 주요 문법 정리
	// #1. 객체를 만들면 반드시 생성자가 호출되어야 합니다
	// #2. 사용자가 생성자를 한개도 만들지 않으면 컴파일러가 디폴트생성자 제공
	//     => 디폴트 생성자 : 인자 없는 생성자 
	//     => 대부분의 객체지향 언어의 공통의 특징
	Point()             { x=0; y=0; std::cout << "1. Point()"         << std::endl; } // 1
	Point(int a, int b) { x=a; y=b; std::cout << "2. Point(int, int)" << std::endl; } // 2
};

int main()
{
	// #3. C++11 이후 () 뿐 아니라 {}도 가능.
	// => 권장. p3 스타일
	Point p1;			// 1번 생성자
	Point p2(1, 2);		// 2번 생성자
	Point p3{ 1, 2 };   // ok. C++11 이후
	Point p4 = { 1, 2 };// ok. 이 코드도 구조체 초기화 같이 보이지만 생성자 호출


	// #4. Point 배열을 만들면 배열 갯수만큼 생성자 호출
	Point arr1[5];			// 1번생성자(디폴트 생성자)가 5회 호출
	Point arr2[5] = { {1,2},{2,3} };	// 2번 생성자 2회
										// 1번 생성자 3회 호출
		
	// #5. 동적 메모리 할당
	Point* p;	// 객체 생성 아님. 생성자 호출 안됨. 

	// malloc : 힙에 메모리 할당. 인자로 크기(숫자)전달
	p = (Point*)malloc( sizeof(Point) );  // 생성자 호출 안됨
	free(p);	// 메모리만 해지, 소멸자 호출 안됨	

	// malloc/free 가 생성자/소멸자를 호출할수 없기 때문에
	// C++에서 "new/delete" 키워드 도입

	p = new Point;	// 1. Point 크기 힙 메모리 할당
					// 2. 생성자 호출
	delete p;		// 1. 소멸자 호출
					// 2. 메모리 해지

	p = new Point(1, 1);// 2번 생성자 사용
	delete p;

	// 주의 : new 사용시 배열 형태로 할당하면 배열 delete 

	int* p1 = new int;  // malloc(sizeof(int)) 의미
	delete p1;			// free(p1) 의미

	int* p2 = new int[10];
	delete[] p2; // <=== 반드시 지켜야 합니다.
}