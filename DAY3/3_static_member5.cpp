#include <iostream>

// 선언과 구현의 분리

class Car
{
	int color;
	static int cnt;
public:
	Car();
	~Car();
	static int get_count();
};

int Car::cnt = 0;  

Car::Car() 
{
	++cnt; 
}
Car::~Car() 
{ 
	--cnt; 
}
static int Car::get_count() 
{
	return cnt; 
}


int main()
{
	std::cout << Car::get_count() << std::endl;
	Car c1;
	Car c2;

	std::cout << Car::get_count() << std::endl; 

}
