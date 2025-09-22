// 1_레퍼런스2
#include <iostream>
// 61 page - 그림 꼭 알아 두세요

void inc1(int n)  { ++n; }
void inc2(int* p) { ++(*p); }
void inc3(int& r) { ++r; }

int main()
{
	int a = 1, b = 1, c = 1;

	inc1( a ); // call by value, a 증가 실패
	inc2( &b); // call by address, b 증가 성공
	inc3( c ); // call by reference, c 증가 성공

	std::cout << a << std::endl; // 1
	std::cout << b << std::endl; // 2
	std::cout << c << std::endl; // 2
}
