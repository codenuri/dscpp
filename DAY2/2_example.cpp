#include <iostream>

// Swap를 만들어 봅시다.
// 1. C 버전
void Swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

// 2. C++ 버전
// #1. pointer 대신 reference
// #2. 함수를 만들지 말고, 함수를 만드는 틀로 제공 - template 도입
// #3. 성능 향상을 위해서 inline 사용
// #4. 이름 충돌등을 막기위해 namespace 사용

namespace Utils
{
	template<typename T>
	inline void Swap(T& a, T& b)
	{
		T tmp = a;
		a = b;
		b = tmp;
	}
}

int main()
{
	int x = 3, y = 2;
	Swap(&x, &y);	   // C 버전
	Utils::Swap(x, y); //  C++버전 사용

	std::cout << x << std::endl; // 2
	std::cout << y << std::endl; // 3
}



