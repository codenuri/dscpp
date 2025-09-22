// github.com / codenuri / dscpp 에서 "DAY2.zip" 받으시면 됩니다.

// 1_레퍼런스.cpp    57 page

#include <iostream>

int main()
{
	int n1 = 10;

	int* p1 = &n1; // C 언어의 포인터 변수
	int& r1 = n1;  // C++ 언어의 reference
				   // 기존 변수(메모리)의 별명을 만드는 것
				    	
	r1 = 30;	// 결국 "n1 = 30" 의 의미

	std::cout << n1  << std::endl; // 30
	
	std::cout << &r1 << std::endl; // 이 코드 결과는 아래 코드 결과와 동일
	std::cout << &n1 << std::endl;


	// & 연산자의 3가지 용도
	int n = 3 & 4;	// 1. 비트 연산자
	int* p = &n;	// 2. 주소 연산자( 이미 선언된 변수의 앞에 표기)
	int& r = n;		// 3. 레퍼런스 연산자

	// 포인터 변수 초기화 vs 레퍼런스 초기화
	int* p2 = &n1; // 포인터는   주소로 초기화
	int& r2 = n1;  // 레퍼런스는 변수 이름으로 초기화
}

