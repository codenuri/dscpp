// 3_입출력2.cpp - 18 page
#include <iostream>
#include <iomanip>  // std::setw()
// 입출력 조정자(i/o manipulator)
// => 입출력의 형태를 변경할때 사용
// => <iostream> 에도 일부 포함
//    <iomanip>  에도 있음


int main()
{
	int n = 10;
	std::cout << n << std::endl; // 10, 즉, 10진수 출력

	std::cout << std::hex << n << std::endl; // a, 16진수

	std::cout << std::dec << n << std::endl; // 10
	std::cout << std::setw(10) << n << std::endl; // 
	std::cout << std::setw(10) << std::setfill('#') << n << std::endl; // 

	double d = 1.0123456789;

	std::cout << d << std::endl; // 몇자리까지 출력되는지 확인하세요
									// => 6자리에서 반올림,5자리까지 출력

	// d 를 10자리 까지 출력해 보세요
	// #1. cppreference.com 에서 std::setw() 찾으세요
	// #2. 상위 문서로 이동.
	// #3. 모든 조정자 목록에서 원하는 것 찾으세요
	// #4. 예제를 보고 사용법을 익히세요. 

	std::cout << std::setprecision(10) << d << std::endl;
}
