#include <iostream>

void f3()
{
	throw std::exception{}; // 그냥 표준 예외 던져도 됩니다.
}
void f2()
{
	f3();
	std::cout << "f2\n";
}
void f1()
{
	f2();
	std::cout << "f1\n";
}
int main()
{
	try
	{
		f1();
	}
	catch (...)
	{
		std::cout << "예외 발생\n";
	}
}