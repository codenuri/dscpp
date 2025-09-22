#include <iostream>

// 아래 템플릿은 1, 2번째 인자가 항상 같은 타입
/*
template<typename T>
T Add(T a, T b)
{
	return a + b;
}
*/

// 아래 템플릿은 1, 2번째 인자가 서로 다른 임의의 타입.
template<typename T1, typename T2>
? Add(T1 a, T2 b)
{
	return a + b;
}

int main()
{
	// 타입 전달
	std::cout << Add<int, double>(1, 2.1) << std::endl;

	// 타입 생략도 가능
	std::cout << Add(1, 2.1) << std::endl;

}

