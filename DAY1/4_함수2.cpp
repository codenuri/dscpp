#include <cstdio>
// 37page. 
// function overloading 
// 인자의 갯수나 타입이 다르면 
// 동일한 이름의 함수를 여러개 만들수 있다.
// => C++, C#, java 등의 대부분의 객체지향 언어가 지원하는 문법
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
	square(s); // ?
}
