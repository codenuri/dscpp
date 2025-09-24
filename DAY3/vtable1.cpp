// vtable1.cpp
// => godbolt.org 에 넣으세요
#include <iostream>

class Base
{
	int a;
public:
	virtual void f1() {}
	virtual void f2() {}
	virtual void f3() {}
};
class Derived : public Base
{
	int b;
public:
	virtual void f2() {}
};
int main()
{
	Base b1, b2;
	Derived d1;
	Base* p = &d1;
	p->f2();	// 이 한줄의 원리는 ?


	// b1 : int a 크기 + 테이블 포인터 크기 인때 align 고려
	// d1 : a, b  크기 + 테이블 포인터 크기 인때 align 고려
	std::cout << sizeof(b1) << std::endl;
	std::cout << sizeof(d1) << std::endl;
}
// vtable2.cpp 만들어서 그대로 복사해 놓으세요.