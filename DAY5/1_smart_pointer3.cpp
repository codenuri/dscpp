#include <iostream>
#include <memory>  // C++ 표준 스마트 포인터가 있는 헤더

class Car
{
public:
	void Go() { std::cout << "Car Go\n"; }
	~Car() { std::cout << "~Car\n"; }
};

int main()
{
	// C++ 표준 스마트 포인터 이름은 "std::shared_ptr" 입니다.
	std::shared_ptr<Car> sp1 = new Car; 
	std::shared_ptr<Car> sp2(new Car);

	sp2->Go();
}