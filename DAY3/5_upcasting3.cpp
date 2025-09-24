#include <vector>

class Animal
{
public:	int age;
};
class Dog : public Animal
{
public:	int color;
};
class Cat : public Animal
{
public:	int speed;
};

// 왜??? upcasting 을 하나요 ???
// 
// upcasting 의 활용 #1. 

//void new_year(Dog* p)  // Dog 만 처리하는 함수
void new_year(Animal* p) // 모든 동물에 대해서 동작하는 함수
{						 // => 동종(동일 기반 클래스 사용, Animal파생클래스)
	++(p->age);			 //    을 처리하는 함수 만들기.
}

int main()
{	
	Dog dog; new_year(&dog);
	Cat cat; new_year(&cat);

	// 
//	std::vector<Dog*> v1; // Dog 객체만 보관 가능한 컨테이너(동적배열)
	std::vector<Animal*> v2; // 모든 동물을 보관하는 컨테이너
							 // 동종을 보관하는 컨테이너
}

// 컨테이너 : 여러개를 보관할수 있는 객체, 다른 언어의 "컬렉션"
//			 배열, std::vector, std::list 등.. 
