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

	static int how_many_days(int m) 
	{ 
		return days[m - 1]; // 복습시 m의 유효성 확인하세요.
	}
};

int main()
{
	Date today{ 2025, 9, 24 };

	Date d1 = today.after_days(1000);

	// 5월이 몇일까지 있는지 알고 싶다.
	// => 어떤 형태로 제공하는 것이 좋을까 ?
	// => 기준일(객체)가 필요없는 작업. static 이 좋습니다
	// 
	// #1. 5월을 가진 객체를 만들고 멤버 함수를 호출하도록
//	Date d{ 2025, 5, 1 };	
//	int ret1 = d.how_many_days();


	// #2. 객체없이 클래스 이름으로 호출하도록 => 권장. 
	int ret2 = Date::how_many_days(5);

	//--------------------------------------------------
	// 내일 날짜를 구하는 tomorrow() 를 제공하려고 합니다.
	// => 기준일이 필요한 작업.
	// => 객체 생성후 호출하도록, non-static 

	Date d2{ 2025, 9, 24 };
	Date d3 = d2.tomorrow();   // 복습시 만들어 보세요

	//-----------------------------------
	// 다음중 좋은 것은 ?
	Date d4{ 2025, 9, 24 };

	bool b1 = d4.is_leap_year();			// 1

	bool b2 = Date::is_leap_year(2025);		// 2
}








