// QA2.cpp - git 에 있습니다.
#include <iostream>

class Base
{
protected:
	int x;
};
// protected : 기반 클래스로 부터 물려받은 멤버에 접근 가능하다는 것
//			   다른 Base 객체의 x 는 접근할수 없다.  
class Derived : public Base
{
public:
	void foo()
	{
		x = 10; // A. ok. 
	}

	void goo(Base* p)
	{
		p->x = 10;	// B. error
	}
};

int main()
{
	Base base;
	base.x = 10; // error

	Derived d;
	d.foo();
	d.goo(&base);
}