// 4_STL_컨테이너1.cpp
#include <iostream>
#include <vector>

// 184 page ~ 

// 단 임베디드 작업을 하는 부서는
// => 힙 을 사용하지 못하는 경우가 있습니다.
// => 이 경우 std::vector 사용하면 안됩니다.

int main()
{
	// 배열   : 크기를 변경할수 없다. 연속된 메모리.  스택에 존재
	// vector : 크기를 변경할수 있다. 연속된 메모리, 배열과 사용법 거의 동일
	//											   데이타 자체는 힙
	int x[5] = { 1,2,3,4,5 };

	std::vector<int> v = { 1,2,3,4,5 };

	// 배열과 vector 는 사용법이 거의 동일 합니다.
	std::cout << x[0] << std::endl; // [] 연산자 사용가능
	std::cout << v[0] << std::endl; // [] 연산자 사용가능


	// 하지만 vector 가 배열 보다 편리합니다.
	// => vector 는 size 변경가능, 다양한 멤버함수 제공
	v.resize(10);

	std::cout << v.size() << std::endl; // 10
}

