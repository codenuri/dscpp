// 가상함수의 원리 - 153 page
// => 복잡한 내용이지만
// => 임베디드 개발자는 반드시 알아야 합니다.(성능에 대한 이야기)
//------------------------------------------------------------
// 컴파일러가 Base의 모든 가상함수 주소를 담은 배열을 전역변수로 생성합니다.

void* Base_vtable[] = { Base타입정보, &Base::f1, &Base::f2, &Base::f3 };

class Base
{
	void* vtptr = Base_vtable; // 컴파일러가 추가한 멤버데이타

	int a;
public:
	virtual void f1() {}
	virtual void f2() {}
	virtual void f3() {}
};
//-------------------------------------------
void* Derived_vtable[] = { Derived타입정보, &Base::f1, &Derived::f2, &Base::f3 };


class Derived : public Base
{
	void* vtptr = Derived_vtable;

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
