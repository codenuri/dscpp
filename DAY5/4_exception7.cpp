#include <iostream>

// noexcept 키워드(C++11)
// 1. 함수가 예외가 있는지 조사
// 2. 함수가 예외가 없다는 것을 알릴때 사용

void foo()
{
}
void goo()
{
}
int main()
{
	bool b = noexcept(foo());

	std::cout << b << std::endl;
}