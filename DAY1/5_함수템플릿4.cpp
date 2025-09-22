#include <iostream>

// decltype(expression) : expression(코드)의 최종 결과로 나오는 타입조사

// 그런데, 아래 코드는 에러 입니다.
// => 왜 에러일까요 ? 컴파일해서 에러의 원인을 읽어 보세요
template<typename T1, typename T2>
decltype(a + b) Add(T1 a, T2 b)
{
	return a + b;
}

int main()
{
	std::cout << Add(1, 2.1) << std::endl;

}

