// cout - 169page
#include <iostream>

// cout 의 원리
int main()
{
	int    n = 10;
	double d = 3.4;

	// "p1 + p2"          이 코드를 컴파일러가
	// "p1.operator+(p2)" 이렇게 변경하는 것처럼

	// "std::cout << n"          을 컴파일러는
	// "std::cout.operator<<(n)" 로 변경합니다.

	std::cout.operator<<(n); // cout << n 과 동일



	
	
}


