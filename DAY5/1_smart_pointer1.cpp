#include <iostream>

// C#, Java, Python의 특징
// => Garbage Collector 가 있다.
// => 메모리 관리를 자동으로
// => 개발자는 필요할때 new 만 사용, delete 는 필요 없다. 언어가 자동으로

// C/C++
// => 메모리 해지는 사용자가 책임져야 한다.

// C++ 의 해결책
// => 스마트 포인터라를 개념을 사용하는 것을 권장
//-----------------------------------------------------

// Car 는 "테스트용 클래스"
class Car
{
public:
	void Go() { std::cout << "Car Go\n"; }
	~Car()    { std::cout << "~Car\n"; }
};

// 아래 코드가 핵심 입니다. 
// 개념 : 임의 타입의 객체가(Ptr p) 다른 타입의 포인터(Car*) 처럼 사용되는것
// 원리 : -> 연산자와 * 연산자를 재정의 해서 마치 포인터처럼 보이게 하는 것
// 장점 : 진짜 포인터가 아니라 객체이다.
//		  생성/복사/대입/소멸의 모든 과정에서 약속된 함수가 호출된다.
//        따라서, 추가적인 기능을 넣을수 있다.
//        대표적인 활용예가 "소멸자에서 delete 코드제공" 하는 것 
class Ptr
{
	Car* obj;
public:
	Ptr(Car* p) : obj{ p } {}

	Car* operator->() { return obj; }
	Car& operator*() { return *obj; }

	~Ptr() { delete obj; }
};
int main()
{
//	Car* p = new Car;
	Ptr  p = new Car;	// Ptr p( new Car ) 로 생각하고, 메모리 그림 이해

	p->Go(); // p가 객체인데, 이렇게 사용하면 아래 처럼 해석됩니다.
			 // (p.operator->())Go() 인데
			 // (p.operator->())->Go() 로 해석해 줍니다.

	(*p).Go(); // p를 포인터 처럼 사용하려면 이코드도 되어야 합니다.
			   // (p.operator*()).Go()
//	delete p;
}

