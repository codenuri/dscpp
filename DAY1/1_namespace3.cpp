// 1_namespace3.cpp - 9page 내용
// 
#include <algorithm>

//using namespace std; // 모든 C++ 표준을 std 이름 없이 사용

// #1. C++ 표준의 모든 함수는 std 이름 공간 안에 있습니다.

int count = 0;

int main()
{
//	int n = min(3, 2); // C++ 표준 함수. algorithm 헤더 필요
	int n = std::min(3, 2);

	int k = count; // 이 코드가 왜 에러일까요 ??
				   // C++ 표준에 "std::count()" 라는 함수가 있습니다.
					// using namespace std 때문에
					// 표준 함수 이름과 전역변수 count 의 이름 충돌
}
