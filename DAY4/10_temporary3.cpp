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


