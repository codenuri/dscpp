// 3_변수1
#include <iostream>

// C++ 은 C언어의 변수 관련 문법을 더욱 발전시켰습니다.
// 교재 22 page ~

struct Point 
{
	int x = 0; // #1. C++11 부터 구조체 필드에 초기값 지정가능.
	int y = 0;
};

int main()
{
	// #2. C 언어에는 없던 타입
	bool b1 = true;		// 1바이트, true/false 키워드로 초기화
	long long n = 0;	// C++11도입, 64비트(8바이트)정수

	// #3. 리터럴 관련 문법
	int n1 = 0b1;		// C++14부터 2진수 표기법가능
	int n2 = 1'000'000;	// C++11부터 자릿수 표기법(digit separator)
						// 정확한 의미 : 리터럴사이의 ' 는 무시해달라
						//				일종의 주석
	
	// #4. struct 변수
	struct Point p1;	// C언어는 struct 필요
	Point p2;			// C++언어는 struct 필요 없음. 
}
