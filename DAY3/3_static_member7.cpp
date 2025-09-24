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

};

int main()
{

}