#include <iostream>


class Date
{
	int year;
	int month;
	int day;

	// 핵심 : 월별 날짜수는 모든 Date 객체가 공유 해야 합니다. static!!
	// 월별 날짜수 - 복습시 제대로 채워서 해보세요
	inline static const int days[12] = { 30, 28, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30 };

public:
	Date(int year, int month, int day)
		: year{ year }, month{ month }, day{ day }
	{
	}
		
	int get_month() const { return month; } 
	void set_month(int m) { month = m; }

	//---------------------------------
	// Date 사용자가 유용하게 사용할수 있는 멤버 함수를 제공하세요

	Date after_days(int ds)
	{
		Date tmp{ year, month, d + ds }; // 잘못된 구현
										// 복습할때 수정해보세요. 

		return tmp;
	}
};

int main()
{
	Date today{ 2025, 9, 24 };

	Date d1 = today.after_days(1000);

	// 5월이 몇일까지 있는지 알고 싶다.
	// => 어떤 형태로 제공하는 것이 좋을까 ?

	// #1. 5월을 가진 객체를 만들고 멤버 함수를 호출하도록
	Date d{ 2025, 5, 1 };	
	int ret1 = d.how_many_days();


	// #2. 객체없이 클래스 이름으로 호출하도록
	int ret2 = Date::how_many_days(5);
}