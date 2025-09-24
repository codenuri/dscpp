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
}




