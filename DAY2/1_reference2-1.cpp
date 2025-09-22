int main()
{
	int n = 0;

	int* p = &n;
	int& r = n;

	*p = 3;	// A
	r = 3;	// B
}

// 위 코드를 godbolt.org 에 넣으세요
// A, B 의 어셈블리 코드를 비교해 보세요