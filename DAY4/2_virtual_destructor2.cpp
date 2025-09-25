#include <iostream>

// 가상 소멸자를 사용하면
// => 결국, 가상함수를 사용하게 되므로, 
// => 가상함수 테이블의 오버헤드를 가지게 됩니다.

// 아주 단순한 클래스를 만들고 있고, 가상함수의 오버헤드가 싫다면
// => 소멸자를 "virtual" 로 하지 말고
// => "delete 기반클래스포인터타입" <== 이 코드만 절때 사용하지 않으면 됩니다.

// Base* p = new Derived;
// delete p; <== 절대 금지. 



class Base
{
public:
	Base() {}

	// protected 소멸자 기술
	// => delete Base* 할수 없도록 하는 기술
protected:
	~Base() {} 
};
class Derived : public Base
{
public:
	Derived() { std::cout << "Derived() 자원할당" << std::endl; }
	~Derived() 
	{ 
		std::cout << "~Derived() 자원해지" << std::endl; 

		// ~Base(); // 컴파일러 추가. 이코드가 되려면
					// ~Base() 는 private 이 아닌 protected
	}
};

int main()
{
	Base* p = new Derived;	

//	delete p;	// 이순간 ~Base() 호출되어야 하는데 protected이므로 에러
				// 이렇게 사용하지 말라는 의미
	delete static_cast<Derived*>(p); // 이렇게 하라는 것.

}