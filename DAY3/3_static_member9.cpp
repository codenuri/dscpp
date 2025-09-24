#include <iostream>

class Car
{
	int color;
	static int cnt;
public:
	// 다음중 에러를 모두 골라 보세요
	// static member data     : 객체가 없어도 메모리에 있다. 모든 객체 공유
	// static member function : 객체없이 호출가능  

	// 아래 함수는 "객체가 있어야 호출 가능"
	// Car c;
	// c.foo();
	void foo()	
	{
		color = 0;	// 1. ok 
		cnt = 0;	// 2. ok 
		goo();		// 3. ok 
		std::cout << this; // 4. ok
	}
	// 아래 함수는 객체없이 호출가능
	static void goo()	
	{
		color = 0;	// 5. error. 객체가 없으면 color 도 메모리에 없다
		cnt = 0;	// 6. ok
		foo();		// 7. error. 객체가 있어어 호출가능한 함수
		std::cout << this; // 8. error. goo 호출시 전달된 객체 없다.
	}
};
int Car::cnt;

int main()
{	
	Car::goo();	// 객체 없이 호출.
}

// static member function 에서는
// => static member (data, function) 만 접근 가능하다.