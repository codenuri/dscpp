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
	Base* p = new Derived;
	delete p;

}