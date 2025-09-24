// vtable1.cpp
// => godbolt.org 에 넣으세요

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
}
// vtable2.cpp 만들어서 그대로 복사해 놓으세요.