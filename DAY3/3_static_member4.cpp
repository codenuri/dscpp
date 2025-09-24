#include <iostream>

// static member function 이야기

class Car
{
	int color;
	static int cnt;
public:	
	Car() { ++cnt; }
	~Car() { --cnt; }

//	int get_count() const { return cnt; } // 객체가 있어야 호출가능
										  // c1.get_count()

	static int get_count() { return cnt; } // static member function
											// 객체가 없어도 호출가능
											// "Car::get_count()"로 호출
};

int Car::cnt = 0; // private 이라도 초기화는 가능. 


int main()
{
	// 자동차를 하나도 만들지 않아도, 자동차의 갯수를 구할수 있어야 한다.
	// => Car 객체가 없어도 Car::cnt 는 메모리에 있다.

	Car c1;
	Car c2;

	std::cout << c1.get_count() << std::endl;

}

