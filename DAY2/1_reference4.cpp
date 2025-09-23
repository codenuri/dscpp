// 전달받는 인자를 읽기만 하려고 합니다.
// 다음중 좋은 코드는 어떤 코드 일까요 ?
// => f1 이 좋은 코드!
// godbolt.org  에서, A, B 의 어셈코드 비교
void f1(int n)
{
	int k = n; // A
}

void f2(const int& n)
{
	int k = n;  // B. n의 원리는 포인터 이므로 이 코드는
//  int k = *n; // 결국 이 의미 입니다.
				//  따라 가서 꺼내 므로 오버헤드 있습니다.
}

int main()
{
	int x = 3;
	f1(x);
	f2(x);
}