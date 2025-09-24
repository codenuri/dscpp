// virtual destructor - 148 page
#include <iostream>

class Base
{
public:
	Base() {}
	~Base() {}
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