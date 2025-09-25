// 6_cout - 187page
//#include <iostream>
#include <cstdio>
// [참고] 실제 출력 코드는 printf 가 아닌 각 OS 의 시스템 콜 사용
// => 수업은 간단히 하기위해 printf 사용
namespace std
{
	class ostream
	{
	public:
		void operator<<(int n)    { printf("%d", n); }
		void operator<<(double d) { printf("%f", d); }
		void operator<<(const char* s) { printf("%s", s); }
	};
	ostream cout;  // cout 은 객체(전역변수)
}

int main()
{
	int    n = 10;
	double d = 3.4;
	std::cout << "ABCD\n"; // cout.operator<<(const char*) 

	std::cout << n; // cout.operator<<(int)
	std::cout << d; // cout.operator<<(double)
}


