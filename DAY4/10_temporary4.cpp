#include <iostream>

// 핵심 #1. 멤버 함수가 *this 를 반환하면 멤버함수를 연속적으로 호출 가능합니다.
// => 메소드 체이닝이라는 기술이고
// => 요즘 정말 많이 유행합니다.
// => 코드가 쉬워지고 보기 좋습니다.

class Counter
{
	int cnt = 0;
public:
	Counter increment()
	{
		++cnt;

		return *this;
	}
	int get_count() const { return cnt; }

	~Counter()
	{
		std::cout << "~Counter() : cnt = " << cnt << std::endl;
	}
};

int main()
{
	Counter c;

	// 메소드 체이닝 기술
	// => 멤버함수(메소드)를 연속적으로 호출하게 하는 기술
	// => 동일 멤버 함수 일수도 있고, 다른 멤버 함수 일수도 있다
	std::cout << "----------------------------------\n";
	c.increment().increment().increment();
	std::cout << "----------------------------------\n";

	std::cout << c.get_count() << std::endl;
}



