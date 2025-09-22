// auto 에 대해서

// [C++11] 변수 선언에 만 사용할수 있다.
// => 우변의 코드로 타입 추론
auto n = 10;


// [C++14] 반환 타입 대신 사용할수 있다.
// => return 문장으로 타입 추론
auto foo()		// int foo()
{
	return 0;
}

// [C++20] 함수 인자로 auto 사용가능
void goo(auto n)
{

}

int main()
{
	goo(1);
	goo(3.4);
}