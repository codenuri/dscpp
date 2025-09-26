#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };

	v[8] = 10; // 1. 예외 발생
			   // 2. 그냥, 잘못된 메모리 접근
}