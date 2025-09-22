// 재귀 호출도 constexpr 가능
// => 컴파일시에 실행 가능
constexpr 
int factorial(int n)
{
	return n * factorial(n - 1); 
}

int main()
{
	int n1 = factorial(5);
	constexpr int n2 = factorial(5);
}

// 위 코드를 godbolt.org 에 넣으세요
// 1. msvc 컴파일러
// 2. gc 컴파일러(x64-86 gcc 15.2)