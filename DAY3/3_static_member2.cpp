#include <iostream>

// 방법 #2. 전역변수 사용
// => 모든 자동차 객체가 공유하게 된다.
// => 객체의 갯수 파악 성공!!

// 단점 
// 1. 전역변수는 누구나 접근할수 있다. 의도치 않게 변경될수 있다.
//    => private 으로 보호 할수 없을까 ?

// 2. Car 뿐 아니라 Bike 의 객체 갯수도 파악하고 싶다.
//    => cnt 라는 이름이 이미 사용중이다. 다른 이름으로 해야 한다.
//    => 일관된게 같은 이름을 사용하게 할수 없을까 ?

int cnt = 0;

class Car
{
	int color;
public:
	Car() { ++cnt; }
	~Car() { --cnt; }
};

int main()
{
	Car c1;
	Car c2;

//	cnt = -10; // 이런 실수도 할수 있다.

	std::cout << cnt << std::endl; // 2
}

