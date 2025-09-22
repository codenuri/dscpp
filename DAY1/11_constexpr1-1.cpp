// 왜 "컴파일 시간에 값을 아는것" 이 중요한가요 ?
// => 배열의 크기, 템플릿 인자등 다양한 문법에서
//   컴파일 시간 상수를 요구 합니다.
int main()
{
	int sz = 10;
	const int c1 = sz;
	const int c2 = 10;
	constexpr int c3 = 10;

	// 핵심 
	// => "배열의 크기" 는 컴파일 시간에 알아야 한다.
	// => 즉, "compile time constant" 만 가능

	int x1[10]; // ok
	int x2[sz]; // error.
	int x3[c1]; // error. runtime constant
	int x4[c2]; // ok.    c1과 같은 const 지만 compile-time constant
	int x5[c3]; // ok.

}