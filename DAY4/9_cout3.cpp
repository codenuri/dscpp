#include <cstdio>

namespace std
{
	class ostream
	{
	public:
		ostream& operator<<(int n) { printf("%d", n);  return *this; }
		ostream& operator<<(double d) { printf("%f", d); return *this;}
		ostream& operator<<(const char* s) { printf("%s", s); return *this;	}
	};
	ostream cout; 
}

int main()
{
	int    n = 10;

	std::cout << "A" << "B" << "n = " << n << "\n";
//  cout.operator<<("A").operator<<("B").operator<<("n=")
}


// 참고
// => std namespace 안에 사용자가 무언가를 추가하는 것은 절대 안됩니다.
// => 위 코드는 cout 의 원리 설명을 위해 std 안에 만들것
// => 실전에서는 절대 금지