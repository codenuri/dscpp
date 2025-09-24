// 6_Upcasting1.cpp      140 page ~
#include <vector>

class Animal
{
public:	
	int age;
};
class Dog : public Animal
{
public:	
	int color;
};
int main()
{
	Dog     dog;

	Dog*    p1 = &dog; // ok
//	int*    p2 = &dog; // error

	// 핵심 #1. 기반 클래스 포인터로 파생클래스 객체의 주소를 담을수있다
	// => upcasting
	// => 가능한 이유는 "메모리 그림"을 생각하세요

	Animal* p3 = &dog; // ok


	// #2. 컴파일러는 p3가 실제 가리키는 객체의 타입은 알수 없다.
	// => 컴파일러가 아는 것은 p3 자체의 타입이 Animal* 라는 것만 알고 있다
	// => 이유는 실행시에 p3가 가리키는 곳은 변경될수 있으므로(아래같은 코드)
	// if (사용자 입력 == 1) p3 = &다른 Animal_객체;

	

	// #3. p3로는 Animal 로부터 물려 받는 멤버만 접근 가능하다.
	//     p3가 가리키는 곳에 Dog가 있어도 Dog 고유 멤버 접근은 안됨

	// 이유는 C++ 은 "static type check" 언어 이므로
	
	// static type check : 컴파일 시간에 타입을 확인하는 것
	//						C++, java, C#, Rust, swift
	// 
	// dynamic type check : 실행시간 타입 확인(python)

	// 컴파일 시간에는 p3가 가리키는 곳이 Dog 라는 확신은 없다.
	// 단지, p3가 가리키는 곳에 Animal 모양이 있다는 것만 안다.

	p3->age = 10;   // ok
//	p3->color = 10; // error


	// #4. p3를 가지고 Dog 고유멤버인 color 에 접근하려면
	// 캐스팅해서 접근해야 합니다.
	// 
	// => 개발자가 책임 질테니, 컴파일러에게 허용해달라는 요청
	// => 단, 이때 p3가 가리키는 곳이 Dog 가 아니라면 
	//    아래 코드는 잘못된 코드(잘못된 메모리 접근)
	static_cast<Dog*>(p3)->color = 10; // ok
				
	// 조사 할수 없나요 ?
	// => 다음 소스에서.. 

}




