#include <vector>
#include <iostream>

int main()
{
	// 배열을 초기화 할때 {}를 사용합니다.

	int x[5] = { 1,2,3,4,5 };

	// vector 도 결국 동적 배열 입니다
	// 아래 코드의 의미를 생각해 보세요
	std::vector<int> v = { 1,2,3,4,5 };

	std::cout << v.size() << std::endl; // ????


	// 아래 2줄의 차이를 생각해 보세요
	std::vector<int> v1(10, 0);
	std::vector<int> v2{10, 0};
}