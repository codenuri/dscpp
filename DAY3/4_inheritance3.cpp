// 상속과 생성자.   136page ~
#include <iostream>

// 상속과 생성자 호출의 원리 - 중요한 문법. 

class Base
{
public:
	Base()      { std::cout << "Base()"  << std::endl; }
	Base(int a) { std::cout << "Base(int)" << std::endl; }
	~Base()     { std::cout << "~Base()" << std::endl; }
};

class Derived : public Base
{
public:
	// 사용자 코드		// 컴파일러가 변경한 코드
	Derived()			// Derived() : Base() <= 컴파일러가 Base생성자호출코드 추가
	{ 
		std::cout << "Derived()" << std::endl; 
	} 
	Derived(int a)		// Derived(int a) : Base()	<= 항상 Base 디폴트 생성자호출
	{ 
		std::cout << "Derived(int)" << std::endl; 
	}
	~Derived()      
	{ 
		std::cout << "~Derived()" << std::endl; 

		// 소멸자는 위 코드가 먼저 실행후 Base 소멸자 호출
		// call Base::~Base()
	}
};
int main()
{
//	Derived d;	
	Derived d(5); // "call Derived::Derived(int)"
}




