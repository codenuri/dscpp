// 4_STL_컨테이너1.cpp
#include <iostream>
#include <vector>

// 185 ~

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };

	v.resize(3);

	std::cout << v.size() << ", " << v.capacity() << std::endl; // 3, 5
	
	v.push_back(0); // 끝에 한개 추가
					// size < capacity 이므로 
					// 이 연산은 아주 빠르게 동작

	std::cout << v.size() << ", " << v.capacity() << std::endl; // 4, 5

	v.shrink_to_fit(); // 여분의 메모리는 제거해달라.

	std::cout << v.size() << ", " << v.capacity() << std::endl; // 4, 4


	v.push_back(0); // 현재 상태는 size == capacity
					// 메모리 재할당 필요
					// g++ : 기본 메모리 2배,  vs : 기존 메모리 1.5배
					// 이 코드는 "expensive operation" 

	std::cout << v.size() << ", " << v.capacity() << std::endl; 
				// 5					6

	v.clear(); // 모든 요소 제거 
				// size 만 0으로 메모리 제거 안됨

	std::cout << v.size() << ", " << v.capacity() << std::endl;
				// 0,					6

	v.shrink_to_fit(); // 이렇게 해야 메모리 자체가 제거

	std::cout << v.size() << ", " << v.capacity() << std::endl;
				// 0,					0
}

// 파이썬
// s = [1,2,3]    // <= 실제 메모리는 4개 할당
// s.append(0)    // <= 메모리 재할당 없음
// s.append(0)    // <= 8개 메모리로 재할당, size 는 5