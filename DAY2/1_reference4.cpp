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

// 정리
// in parameter : 전달 받은 인자를 읽기만 하는 파라미터
// out parameter : 전달 받은 인자를 변경하거나, 값을 담아주는 것(inc 함수)

// 1. out parameter 만들때
// pointer 또는 reference 모두 가능
// => 성능 차이는 거의 없음
// => 단, 안전성을 고려하면 reference 가 좋음.
void inc1(int* p) { ++(*p); } // good
void inc2(int& r) { ++r; }    // best

// 2. in parameter
// => 인자가 primitive type(int, double) : call by value 가 좋다
// => ex) void f1(int n) {}

// => 인자가 user define type 이고 크기가 크다면 (보통 8바이트 이상의크기)
// => const & 가 좋다.
// => ex) void foo(const Rect& rc) {}

// 구글에서 "C++ core guideline" 검색
// 1번째 링크 선택