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

	// static_cast : 컴파일 시간 캐스팅. 컴파일 할때 허용해 달라는 요청
	//				=> 실행시간에 변경될수도 있으므로 
	//				=> 컴파일러는 Dog 가 맞는지 확인할수 없다.
	//				=> 사용자의 요청이므로 무조건 허용
	//				=> 따라서, 정상주소를 반환
	//				=> 그런데, 그 메모리에 있는 것이 Dog가 아니면 
	//					사용시 잘못된 메모리 접근

	Dog* p1 = static_cast<Dog*>(p);

	std::cout << p1 << std::endl;

//	p1->color = 10; // 잘못된 메모리 접근


}




