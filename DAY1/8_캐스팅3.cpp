#include <iostream>

// reinterpret_cast 
// 1. 서로 다른 타입간의 주소 캐스팅
// 2. 정수 <=> 포인터 캐스팅

int main()
{
	double d = 3.4;
	
	// #1. 서로 다른 타입의 주소 변환
	// double* =>int*
	int* p1 = &d;		// error. 암시적 변환 안됨
	int* p2 = (int*)&d; // ok. C 스타일 캐스팅은 대부분 성공

	int* p3 = static_cast<int*>(&d); // error
	int* p4 = reinterpret_cast<int*>(&d); // ok.

	// #2. 정수 <=> 포인터 변환
	int* p5 = 1000; // error
	int* p6 = static_cast<int*>(1000);      // error
	int* p7 = reinterpret_cast<int*>(1000); // ok

	// reinterpret_cast 는 위 2개 용도외에 사용하면 에러
	double d1 = n; // ok.. int => double 의 값 캐스팅은 캐스팅 없어도 됨
	double d2 = reinterpret_cast<double>(n); // error. 
											 // 용도에 맞지 않음
	
}

