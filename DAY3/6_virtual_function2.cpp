// 7_가상함수1  144 page ~
//			   150 page
#include <iostream>

class Animal
{
public:
	void Cry1() { std::cout << "Animal Cry1" << std::endl; } 
};

class Dog : public Animal
{
public:
	void Cry1() { std::cout << "Dog Cry" << std::endl; }  
};

int main()
{
	Animal a; 
	Dog    d; 

	Animal* p = &d;


	p->Cry1();	// ??

}




