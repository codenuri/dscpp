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

	s1.foo();
	s2.foo();
}