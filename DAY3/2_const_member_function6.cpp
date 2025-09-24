class Sample
{
public:
	// 동일 이름의 상수/비상수 멤버 함수를 만들수 있습니다.
	// => 객체가 상수일때와 비상수 일때 다른 알고리즘 사용
	// => 앞의 예제에서 Vector 의 at() 함수 참고
	void foo()       { std::cout << "foo\n"; }
	void foo() const { std::cout << "foo const\n"; }
};

int main()
{
	Sample s1;
	const Sample s2;

	s1.foo();	// 1. foo() 호출
				// 2. foo() 버전이 없으면 "foo() const" 호출


	s2.foo(); // foo const 상수 멤버함수만 호출 가능.
			  // foo const 버전이 없으면 에러
}
// 결국 "상수 멤버 함수는 객체가 상수일때" 를고려하는 것
// => 함수 인자로 foo(const Rect& r) 등의 경우가 너무나 많이 사용된다.

// 다른 언어도 이렇게 복잡한가요 ?
// C#/Java/Python => 객체를 상수로 만들수 없다.

// C++/Rust :객체가 상수 일수 있고, 아주 널리 사용
// swift : 특수한 경우만 객체가 상수 가능
// 