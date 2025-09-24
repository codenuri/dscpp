#include <iostream>

// 프로그램에서 날짜를 다루는 경우가 많다.
// => Date 타입을 만들자.

class Date
{
	int year;
	int month;
	int day;
public:
	Date(int year, int month, int day)
		: year{ year }, month{ month }, day{ day }
	{
		// 값의 유효성을 확인 하려면 초기화 리스트가 아닌 
		// 여기서 코드 작성
		// => 복습할때 해보세요.
	}

	// getter/setter 제공
	// => 복습시, year, day 도 해보세요
	// => set 은 유효 범위도 조사해 보세요.
	int get_month() const { return month; }  // 주의 get 은 상수멤버함수
	void set_month(int m) { month = m; }

};

int main()
{
	Date today{ 2025, 9, 24 };
	int m = today.get_month();
}