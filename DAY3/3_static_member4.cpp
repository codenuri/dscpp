#include <iostream>

// static member function 이야기

class Car
{
	int color;
	static int cnt;
public:	
	Car() { ++cnt; }
	~Car() { --cnt; }

	int get_count() const { return cnt; }
};
int Car::cnt = 0; // private 이라도 초기화는 가능. 


int main()
{
	Car c1;
	Car c2;

	std::cout << c1.get_count() << std::endl;

}

