#include <iostream>

// friend 79page ~

// 멤버 함수로 하면 되는데, 왜 friend 함수를 사용하나요 ?
// => 멤버 함수로 안될때가 있습니다. - 연산자 재정의 예제에서 배웁니다

// setter/getter 를 만들면되지 않나요 ?
// => setter/getter : 모든 위치에서 접근할수 있게 하겠다는 의미
// => friend        : 특정한 함수만 접근 권한 부여.. 

// friend 는 캡슐화를 위배 하지 않나요 ?
// => 맞습니다.그래서 비판이 많습니다.
// => C++외의 다른 언어에는 없는 문법

class Bike
{
	int gear = 0;
public:
//	void set_gear(int n) { gear = n; }

	// friend 함수 : 멤버 함수는 아니지만 private 영역에 접근 가능 
	friend void bike_repair(Bike& b);
};

void bike_repair(Bike& b)
{
	b.gear = 10; // ok. friend 함수 이므로
}


int main()
{
	Bike b;
	bike_repair(b);
}