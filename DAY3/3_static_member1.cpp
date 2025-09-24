// 3_정적멤버1 - 111 page
#include <iostream>

// Car 객체의 갯수를 관리하고 싶다.

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

	std::cout << c1.cnt << std::endl;
}

