// 3_입출력2.cpp - 18 page
#include <iostream>
#include <iomanip>  // std::setw()

int main()
{
	int n = 10;
	std::cout << n << std::endl; // 10, 즉, 10진수 출력

	std::cout << std::hex << n << std::endl; // a, 16진수

	std::cout << std::dec << n << std::endl; // 10

	std::cout << std::setw(10) << n << std::endl; // 

	std::cout << std::setw(10) << std::setfill('#') << n << std::endl; // 
}
