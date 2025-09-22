// 6_함수1.cpp  34 page ~
// C++함수의 특징 1. 디폴트 파라미터

// 주의 #1. 함수를 선언과 구현으로 분리시, 선언에만 표기한다
// => 보통, 구현에는 주석으로 표기

// 주의 #2. 마지막 인자부터 차례대로만 표기 가능

// 원리 : 호출하는 코드에 디폴트 값을 채우는것
// => godbolt.org 에서 어셈블리코드 확인

void f1(int a,     int b = 0, int c)     {} // error
void f2(int a = 0, int b,     int c = 0) {} // error

void foo(int a = 0, int b = 0, int c = 0);

int main()
{
	foo(1, 2, 3);
	foo(1, 2);
	foo(1);		// foo(1, 0, 0)
	foo();		// foo(0, 0, 0)
}

void foo(int a /*= 0*/, int b /*= 0*/, int c /*= 0*/ )
{
}
