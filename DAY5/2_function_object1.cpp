#include <iostream>
// 함수 객체(function object) 란 ?
// => () 연산자를 연산자 재정의해서 함수처럼 호출 가능한 객체

// 왜 ?? 일반함수로 하면되는데.. 함수 객체를 만드나요 ?
// => 함수 객체가 훨씬 좋습니다.
// => C++20 이후의 대부분의 표준 함수는 "일반 함수"아닙니다. "함수객체"

class Plus
{
public:
	int operator()(int a, int b) const
	{
		return a + b;
	}
};

int main()
{
	Plus p;		// p 는 함수가 아닌 "객체" 입니다.

	int n1 = p(1, 2); // 객체인 p를 함수 처럼 사용합니다. 함수객체라고 합니다.
	int n2 = p.operator()(1, 2); // 이렇게 직접 호출도 가능

	// a + b;	// a.operator+(b)
	// a - b;	// a.operator-(b)
	// a();		// a.operator()()
	// a(1,2);	// a.operator()(1, 2)
}