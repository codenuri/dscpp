#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };

	try
	{
		v[8] = 10;	// 1. 예외 발생
					// 2. 그냥, 잘못된 메모리 접근
	}
	catch (...)
	{
		std::cout << "예외 발생\n";
	}
	std::cout << "계속실행\n";
}