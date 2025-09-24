#include <iostream>

class Car
{
	int color;
	static int cnt;
public:
	Car() { ++cnt; }
	~Car() { --cnt; }

	static int get_count() { return cnt; } 

};
int Car::cnt = 0; 


int main()
{

	std::cout << Car::get_count() << std::endl;
	Car c1;
	Car c2;

	std::cout << Car::get_count() << std::endl;
	std::cout << c1.get_count() << std::endl;  

}


