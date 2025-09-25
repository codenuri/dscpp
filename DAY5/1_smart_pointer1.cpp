#include <iostream>

// C#, Java, Python의 특징
// => Garbage Collector 가 있다.
// => 메모리 관리를 자동으로
// => 개발자는 필요할때 new 만 사용, delete 는 필요 없다. 언어가 자동으로

// C/C++
// => 메모리 해지는 사용자가 책임져야 한다.

// C++ 의 해결책
// => 스마트 포인터라를 개념을 사용하는 것을 권장
//-----------------------------------------------------

// Car 는 "테스트용 클래스"
class Car
{
public:
	void Go() { std::cout << "Car Go\n"; }
	~Car()    { std::cout << "~Car\n"; }
};

// 아래 코드가 핵심 입니다. 
class Ptr
{
	Car* obj;
public:
	Ptr(Car* p) : obj{ p } {}

	Car* operator->() { return obj; }
};


int main()
{
//	Car* p = new Car;
	Ptr p = new Car;

	p->Go();

//	delete p;
}

