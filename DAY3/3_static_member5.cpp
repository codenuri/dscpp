#include <iostream>

// 선언과 구현의 분리
// const  member function 의 const : 양쪽 모두 표기
// static member function 의 static : 선언만 표기(구현은 없어야 합니다)

// Car.h
class Car
{
	int color;
	static int cnt;
public:
	Car();
	~Car();
	static int get_count();
};

// Car.cpp 
//#include "Car.h"
int Car::cnt = 0;  

Car::Car() 
{
	++cnt; 
}
Car::~Car() 
{ 
	--cnt; 
}
int Car::get_count() 
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
