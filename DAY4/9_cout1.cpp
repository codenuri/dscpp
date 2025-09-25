// cout - 169page
#include <iostream>

// cout 의 원리
int main()
{
	int    n = 10;
	double d = 3.4;

	// p1 + p2	=> p1.operator+(p2)

//	std::cout << n; // cout.operator<<(n)
//	std::cout << d;

	std::cout.operator<<(n); // cout << n 과 동일
	
}


