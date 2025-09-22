// 69 page
// 거의 모든 프로그램언어에서 상수의 개념은 2가지 의미가 있습니다.
// 1. 실행중에는 값을 변경할수 없다.(readonly, immutable)
// 2. 컴파일 시간에 컴파일러가 값을 알고 있다.(compile-time constant)

int main()
{
	int n = 3;

	const     int c1 = 3;
	const     int c2 = n;

	constexpr int c3 = 3;
	constexpr int c4 = n;

}