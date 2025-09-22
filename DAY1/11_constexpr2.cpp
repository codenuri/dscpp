// C++11 이후에 나오는 constexpr의 의미
// => "컴파일 시간에...." 라는 개념

// 1. constexpr 상수
// 2. constexpr 함수 - 아래 소스

// constexpr 함수 - C++11 에서 가장 막강한 기능중 하나
// 1. 인자 값을 컴파일 시간에 알수 있고
// 2. 함수 호출이 사용되는 자리가 "컴파일 시간에 값을 알아야 한다면"
// 3. 함수 실행을 컴파일 시간에 해달라.!

constexpr int add(int a, int b)
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