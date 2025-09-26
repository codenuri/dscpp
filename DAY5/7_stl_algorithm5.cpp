// 6_알고리즘1
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

bool foo(int n) { return n % 3 == 0; }

int main()
{
	std::vector<int> v = { 1,2,9,4,3,6,7,3,9,10 };

	int k = 3; // 사용자가 입력한 값이라고 가정

	// 주어진 구간에서 처음 나오는 "k" 의 배수 를 찾고 싶다.

	// 람다표현식이 아닌 일반함수로 만들어서 전달하는 경우
	// => k를 사용할수 없다.
	// => 이 작업을 하려면 전역변수등이 필요.
//	auto ret2 = std::find(v.begin(), v.end(), foo); // ???


	// 람다표현식을 사용하면
	// => 자신이 속한 함수(main)의 지역변수를 사용 가능합니다.
	// => 이것을 "지역변수를 캡쳐 한다" 라고 합니다.
	auto ret3 = std::find(v.begin(), v.end(), 
				[k](int n) { return n % k == 0; });

}

// 람다 표현식을 사용하는 이유
// 1. 자신이 속한 문맥(main함수)의 지역변수 캡쳐 능력!!
// 2. 일반 함수로 전달하는 것보다 빠르다.(인라인 치환됨.)

