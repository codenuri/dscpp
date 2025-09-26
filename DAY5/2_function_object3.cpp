#include <iostream>
#include <bitset>	// 비트를 관리하는 타입

// 함수 객체는 "상태" 를 가질수 있습니다.
// => 멤버 데이타가 있다는 것
// => 함수 실행중 생성된 데이타를 멤버데이타에 보관했다고 다음번 실행시 참고가능

class URandom
{
	std::bitset<10> bs; // 10 bit 관리
	bool recycle;
public:
	URandom(bool b = false) : recycle{false}
	{ 
//		bs.set(3); // 3번째 비트만 1로
		bs.set();  // 모든 비트를 1로
	}

	int operator()()
	{
		return rand() % 10;
	}
};

URandom urand;  // urand 는 객체지만 함수 처럼 사용가능.
				// main 수정할 필요 없습니다.

int main()
{
	for (int i = 0; i < 10; i++)
	{
		std::cout << urand() << std::endl;
	}
}