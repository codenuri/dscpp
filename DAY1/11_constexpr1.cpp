// 69 page
// 거의 모든 프로그램언어에서 상수의 개념은 2가지 의미가 있습니다.
// 1. 실행중에는 값을 변경할수 없다.(readonly, immutable)
// => 컴파일 시간에는 값을 알수도 있고 모를수도 있다.
//    => C# : readonly
//    => Rust : immutable
//    => C/C++ : const 
// 
// 2. 컴파일 시간에 컴파일러가 값을 알고 있다.(compile-time constant)
// => 실행시간에 변경할수도 없다.
//    => C# : const 
//    => C++11 의 constexpr 

#include <iostream>

int main()
{
	int n = 3;
	std::cin >> n; // 실행시간에 입력

	// const : 실행할때 변경 불가, 컴파일 시간에 값을 알수도, 모를수도 있다.
	const     int c1 = 3; // ok. 컴파일 시간에 알수 있다.
	const     int c2 = n; // ok. 컴파일 시간에 알수 없다.
							// 단, c1, c2 모두 변경은 불가

	// constexpr : 반드시 컴파일 할때 값을 알아야 한다
	//				변수로 초기화 할수 없다.
	constexpr int c3 = 3;	// ok
	constexpr int c4 = n;	// error

}