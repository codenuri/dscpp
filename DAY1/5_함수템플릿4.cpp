#include <iostream>

// decltype(expression) : expression(코드)의 최종 결과로 나오는 타입조사

// 그런데, 아래 코드는 에러 입니다.
// => 왜 에러일까요 ? 컴파일해서 에러의 원인을 읽어 보세요
// => a, b 를 선언전에 사용하는 코드 입니다.
// => "함수의 인자" 가 a, b 의 선언 입니다.
/*
template<typename T1, typename T2>
decltype(a + b) Add(T1 a, T2 b)
{
	return a + b;
}
*/
// 해결책 : 후위 반환 타입
template<typename T1, typename T2>
auto Add(T1 a, T2 b) -> decltype(a + b)
{
	return a + b;
}

int main()
{
	std::cout << Add(1, 2.1) << std::endl;

//	a = 20;	// error. 변수를 선언전에 사용
//	int a = 10;
//	a = 20; // ok. 변수를 선언후에 사용

}

