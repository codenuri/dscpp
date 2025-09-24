// 7_가상함수1  144 page ~
//			   150 page
#include <iostream>

class Animal
{
public:
	// non-virtual : C++ 기본 바인딩인 static binding 해달라는 것
	//				 컴파일 시간에 포인터 타입으로 함수 결정
	void Cry1() { std::cout << "Animal Cry1" << std::endl; } 
	
	// virtual : dynamic binding 해달라는 것
	//			 실행시간에 메모리 조사해서, 실제 객체에 맞게 호출
	virtual void Cry2() { std::cout << "Animal Cry2" << std::endl; }
};


class Dog : public Animal
{
public:
	void Cry1() { std::cout << "Dog Cry1" << std::endl; }  

	virtual void Cry2() { std::cout << "Dog Cry2" << std::endl; }
};

int main()
{
	Animal a; 
	Dog    d; 

	Animal* p = &d;

	p->Cry1();	// static binding. 포인터 타입으로 결정 Animal Cry1 
	p->Cry2();	// dynamic binding 메모리 조사후 실제 객체에 맞게, Dog Cry1

}




