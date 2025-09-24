// virtual destructor - 148 page
#include <iostream>

// 핵심 
// => C++ 사용시, 상속문법을 사용하게 된다면
// => 되도록(95%이상)기반 클래스 소멸자는 "virtual" 로 해야 합니다.
// => "가상소멸자" 라고 불리는 문법

class Base
{
public:
	Base() {}
	virtual ~Base() {} // 핵심
};

class Derived : public Base
{
public:
	Derived()  { std::cout << "Derived() 자원할당" << std::endl; }
	~Derived() { std::cout << "~Derived() 자원해지" << std::endl; }
};

int main()
{
	// 아래 코드는 문제 없음
	// Derived d;

	// 아래 코드도 문제 없음.
//	Derived* p = new Derived;
//	delete p;

	// 핵심은 아래 코드.. 
	Base* p = new Derived;	// 1. Derived 크기 메모리 할당
							// 2. 생성자 호출

	delete p;	// 1. 소멸자 호출 ( p->소멸자() )
				// 2. 메모리 파괴

	// "p->소멸자()" 도 함수 호출이므로 
	// static binding 할지 dynamic binding 할지 먼저 결정해야 합니다.

	// 1. 컴파일러가 아는 것은 p 자체의 타입만 알수 있다.
	//    p 자체의 타입은 Base* 

	// 2. 따라서, 컴파일러는 Base 클래스를 조사해서 소멸자가
	//    virtual 인지 아닌지 조사

	// Base 소멸자가 virtual 아니면 : static bindng, ~Base() 호출
	// Base 소멸자가 virtual 이면   : dynamic bindng, 
	//								p가 가리키는 객체 조사후 호출
	//								Derived 를 가리키면 ~Derived() 호출

}