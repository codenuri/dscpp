#include <iostream>

class Base
{
protected:
	int x;
};

// protected : 기반 클래스로 부터 물려받은 멤버에 접근 가능하다는 것

class Derived : public Base 
{
public:
	void foo()
	{
		x = 10;			// A
	}
	void goo( Base* p)
	{
		p->x = 10;		// B
	}
};

int main()
{
	Base base;
	base.x = 10;

	Derived d;
	d.foo();
	d.goo(&base);
}



