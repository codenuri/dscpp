// 6_cout - 187page
//#include <iostream>
#include <cstdio>

namespace std
{
	class ostream
	{
	public:
		void operator<<(int n) { printf("%d", n); }
	};
	ostream cout;  // cout 은 객체(전역변수)
}

int main()
{
	int    n = 10;
	double d = 3.4;

	std::cout << n; // cout.operator<<(int)
//	std::cout << d; // cout.operator<<(double)
}


