//  후위 반환 타입 - 42page

// C/C++ 언어의 전통적인 함수 모양
int square1(int a)
{
	return a * a;
}

// C++11 의 후위 반한 타입(suffix return type)이라는 문법
// Swift, Rust, Python 의 type annotation 등에서도 동일하게 사용
auto square2(int a) -> int
{
	return a * a;
}

int main()
{
	square1(3);
}
