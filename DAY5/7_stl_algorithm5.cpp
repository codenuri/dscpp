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

	auto ret2 = std::find(v.begin(), v.end(), foo); // ???


	auto ret3 = std::find(v.begin(), v.end(), [](int n) { return n % 3 == 0; });

}


