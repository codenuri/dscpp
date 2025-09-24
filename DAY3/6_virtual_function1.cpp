// 7_가상함수1  144 page ~
//			   150 page
#include <iostream>

class Animal
{
public:
	void Cry1() { std::cout << "Animal Cry1" << std::endl; } // 1
};

class Dog : public Animal
{
public:
	// function override : 기반 클래스 멤버 함수를 파생클래스가 다시 만드는것
	//						구현을 변경하겠다는 의미 
	void Cry1() { std::cout << "Dog Cry" << std::endl; }  // 2
};

int main()
{
	Animal a; a.Cry1(); // 1. Animal Cry1
	Dog    d; d.Cry1(); // 2. Dog Cry1

	Animal* p = &d;		

	// p                : Animal* 타입
	// p가 가리키는 객체 : Dog
	p->Cry1();	// ??

	// C++/C# : Animal Cry1 호출
	// Java, Swift, Python 등 대부분의 언어 : Dog Cry1
}

// p->Cry1() 을 어떤 함수와 연결할것인가 ?
// => 함수 바인딩(function binding) 문제


// 1. static binding : 컴파일 시간에 컴파일러가 어느 함수인지 결정
//			   핵심 ) 컴파일러는 p가 가리키는 객체가 실제 어떤 객체인지 모른다
//				      컴파일러가 아는 것은 "p 자체의 타입이 Animal*" 라는것
//				      따라서 컴파일러가 결정하면 "Animal Cry1" 호출.
// 논리적이지 않지만, 빠르다.
// C++/C# 의 기본 바인딩


// 2. dynamic binding : 컴파일 시간에는 p가 가리키는 메모리를 조사하는 기계어 생성
//						실행할때 p가 가리키는 메모리의 객체 종류를 조사해서 호출결정
//						p가 가리키는 곳에 Dog가 있었다면 Dog Cry1 호출
// 논리적이지만, 느리다.
// Java, Swift, Python, kotlin 등 대부분의 객체지향 언어. 
// C++/C# 의 virtual function





