// C++11 이후에 나오는 constexpr의 의미
// => "컴파일 시간에...." 라는 개념

// 1. constexpr 상수
// 2. constexpr 함수 - 아래 소스

int add(int a, int b)
{
	return a + b;
}

int main()
{
	int a = 1, b = 2;

	int x1[add(3, 4)];
	int x2[add(a, b)];

	int n1 = add(a, b);
}