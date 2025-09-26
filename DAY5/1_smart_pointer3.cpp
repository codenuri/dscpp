#include <iostream>
#include <memory>	// C++ 표준 스마트 포인터가 있는 헤더
					// C++11 에서 추가

class Car
{
public:
	void Go() { std::cout << "Car Go\n"; }
	~Car() { std::cout << "~Car\n"; }
};

int main()
{
	// C++ 표준 스마트 포인터 이름은 "std::shared_ptr" 입니다.
	// => 생성자가 explicit 입니다. = 초기화 안되고 ()나 {} 만 가능
//	std::shared_ptr<Car> sp1 = new Car; // error.
	std::shared_ptr<Car> sp2(new Car);  // ok

	// sp2를 "Car*" 로 생각하고 사용. 
	sp2->Go();
}

// 10여년전에 미국에서 C++ 교육시.
// => raw pointer를 가리키지 말고, 스마트 포인터만 교육하자. 라는 의견.. 

// Rust 언어가 위처럼..
// => raw pointer 는 "unsafe mode" 에서만 가능
// => 일반 코드는 "스마트 포인터" 로만.. 