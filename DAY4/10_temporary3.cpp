#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a, int b) { std::cout << "Point()" << std::endl; }
	~Point() { std::cout << "~Point()" << std::endl; }
};
//------------------------------------------------
// 
// 함수 인자와 복사본 객체
/*
void f1(Point  pt) {} // call by value     : 복사본 생성, 복사본 이름 pt
void f2(Point& pt) {} // call by reference : 복사본 생성 안됨. 

int main()
{
	Point p{ 0, 0 };

	f1(p);
	f2(p);
}
*/
//----------------------------------------------
// 함수 반환값과 복사본 객체(temporary)

Point pt{ 1, 2 };

Point foo() // return by value : pt가 아닌 pt의 복사본 반환. 
{
	return pt; // 메모리에 pt의 복사본이 생성됩니다.
				// 생성된 복사본이 main 의 A 위치에 반환
				// 생성된 복사본은 이름이 없는 temporary
				// A의 문장끝에서 파괴!!
}

Point& goo()  // return by reference : 리턴용 임시객체를 만들지 말고
{				//						pt 별명을 반환해 달라.
	return pt;
}
int main()
{
	foo(); // A
	goo(); // 반환 값은 pt의 별명!!
}

// 아래 코드 생각해 보세요
Point f1()
{
	Point p{ 1,1 };
	return p;	// 1. p가 파괴되기 전에 temporary 생성
				// 2. 함수 호출이 종료되므로 p는 파괴
				// 3. 1에서만든 temporary 반환
}
// 지역변수는 절대 참조리턴하면 안됩니다. 아래 코드는 잘못된 코드
Point& f2() // <=== 잘못된 코드
{
	Point p{ 1,1 };
	return p;
}