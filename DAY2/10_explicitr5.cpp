#include <vector>
#include <iostream>

int main()
{
	// 배열을 초기화 할때 {}를 사용합니다.

	int x[5] = { 1,2,3,4,5 };

	// vector 도 결국 동적 배열 입니다
	// 아래 코드의 의미를 생각해 보세요
	std::vector<int> v = { 1,2,3,4,5 };

	std::cout << v.size() << std::endl; // 5


	// 아래 2줄의 차이를 생각해 보세요
	// =>std::vector<int> 는 () 초기화와 {} 초기화를 다르게 구현
	// () 초기화 : 갯수, 초기값
	// {} 초기화 : 요소들.. 
	std::vector<int> v1(10, 0); // 10개의 요소를 0으로 초기화 해달라.
	std::vector<int> v2{10, 0}; // 2개를 10, 2로 초기화


	std::vector<int> v3(10); // 10개 요소
	std::vector<int> v4{ 10 }; // 1개 요소를 10으로

	// 아래 코드에서 여러 여부를 생각해보세요
	std::vector<int> v5 = { 10 };
	std::vector<int> v6 = 10;
}