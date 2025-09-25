#include <iostream>

int main()
{
	// std::cout 의 정체는 std::ostream 클래스의 전역변수 입니다.
	
	std::ostream& r1 = std::cout;

	// 이제 std::cout 대신 r1 사용가능
	r1 << "ABC" << 10 << std::endl;



	// 그런데, const& 로 하면 << 연산 안됩니다.

	const std::ostream& r2 = std::cout;

	r2 << "ABC"; // error
}


