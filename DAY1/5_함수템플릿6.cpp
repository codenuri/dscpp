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
	goo(1);		// void goo(int) 함수 생성
	goo(3.4);	// void goo(double) 함수 생성
				// => 즉, goo는 template 입니다.
}
// 위 goo 는 아래와 완벽히 동일합니다.
template<typename T>
void goo(T n)
{
}