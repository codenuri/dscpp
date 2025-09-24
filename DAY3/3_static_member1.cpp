// 3_정적멤버1 - 111 page
#include <iostream>

// Car 객체의 갯수를 관리하고 싶다.
// => 생성자에서++, 소멸자에서 -- 하면 될것 같다

// 방법 #1. 멤버 데이타 cnt 사용
// => 실패
// => 멤버 데이타는 객체별로 따로 생성된다.
// => 아래 코드는 c1, c2 가 각각 자신의 cnt 사용

class Car
{
	int color;	
public:

	int cnt = 0;

	Car()  { ++cnt; }
	~Car() { --cnt; }
};

int main()
{
	Car c1;
	Car c2;

	std::cout << c1.cnt << std::endl; // 1
}

