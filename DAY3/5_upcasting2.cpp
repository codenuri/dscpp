#include <iostream>

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
	Animal a;
	Dog    dog;

//	Animal* p = &dog;
	Animal* p = &a;   // 현재 p가 가리키는 것은 Animal

	
	Dog* p1 = static_cast<Dog*>(p);

	std::cout << p1 << std::endl;




}




