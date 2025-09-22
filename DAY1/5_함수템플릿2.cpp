#include <iostream>

template<typename T>
T Add(T a, T b)
{
	return a + b;
}

int main()
{
	// #1. 아래 코드는 왜 에러일까요 ? 에러의 정확인 원인 ?
	std::cout << Add(1, 2.1) << std::endl;
	
}

