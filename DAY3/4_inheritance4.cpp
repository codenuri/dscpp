#include <iostream>

// 아래 코드에서 에러를 모두 찾아 보세요
// => 핵심 : Base 에는 디폴트 생성자가 없습니다.
class Base
{
public:
	Base(int a) { std::cout << "Base(int)" << std::endl; }
	~Base() { std::cout << "~Base()" << std::endl; }
};

class Derived : public Base
{
public:
	// 핵심 : 기반 클래스에 디폴트 생성자가 없다면 아래 2줄은 모두 에러
	// => 컴파일러가 추가한 코드 때문에!
//	Derived(){}			// Derived()      : Base(){}
//	Derived(int a) {}	// Derived(int a) : Base(){}

	// 해결책 : 사용자가 기반 클래스의 어떤 생성자를 호출할지 명시적으로 표기
	Derived()      : Base(0) {}
	Derived(int a) : Base(a) {}
};

int main()
{
}


// 참고
// 요즘 많은 언어가 "사용자 코드" 에 추가로 "컴파일러가 코드 추가"
// => 즉, 내가 만들지 않은 코드도 너무 많이 추가!!!

// 싫다. 내가 만든것만(눈에 보이는 것만) 실행해줘!!!
// => Zig.   임베디드에서 많이 퍼지고 있는 언어. 

