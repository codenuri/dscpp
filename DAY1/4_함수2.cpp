#include <cstdio>
// 37page. 
// function overloading 
// 인자의 갯수나 타입이 다르면 
// 동일한 이름의 함수를 여러개 만들수 있다.
// => C++, C#, java 등의 대부분의 객체지향 언어가 지원하는 문법

// 일부 언어가 이문법을 "코드가 모호해 진다" 라고 표현하면서
// 비판 합니다.
// => python, rust, zig 에 이 문법 없음.
// => C언어는 오래된 언어라서 이문법 없음.

int square(int a)
{
	return a * a;
}
double square(double a)
{
	return a * a;
}
int main()
{
	square(3);
	square(3.4);

	short s = 3;
	square(s); // int..
				// 그런데, 가독성이 좋은가요 ?
}
