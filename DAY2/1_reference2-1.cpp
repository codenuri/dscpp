
// 위 코드를 godbolt.org 에 넣으세요
// A, B 의 어셈블리 코드를 비교해 보세요
// 
// C++ 표준 문서에 
// => "reference 는 메모리 구조가 pointer 와 동일하다" 라고 되어 있지는 않음
// => 단지, reference 는 기존 변수의 alias 이다 라고 만 정의
// => 하지만, g++, clang++, msvc 등 대부분의 컴파일러는 내부적으로 포인터
//    와 유사(동일)하게 기계어 생성.

int main()
{
	int n = 0;

	int* p = &n;
	int& r = n;

	*p = 3;	// A
	r = 3;	// B

	// 레퍼런스는 "안전한 포인터" 입니다.

	// 포인터는 
	int* p1;			// 초기화되지 않거나
	int* p2 = nullptr;	// 0으로 초기화 가능

	// reference 는
	int& r1;			// error. 초기값이 없으면 에러
	int& r2 = nullptr;	// error. 0 초기화도 안됨
	int& r3 = n;        // 반드시 유효한 변수로 초기화 해야함.
}
void f1(int* p)
{
	*p = 3;
}
void f2(int& r)
{
	r = 3;
}
