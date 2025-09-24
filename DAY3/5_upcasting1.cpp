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

	if (사용자 입력 == 1) p3 = &다른 Animal_객체;
}




