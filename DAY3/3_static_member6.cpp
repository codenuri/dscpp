#include <iostream>

class Car
{
	int color;
	
	// C++17 inline static 문법
	// => static 멤버 데이타 만들때.
	// => 클래스 외부 정의 없어도 됩니다.
	// => 빌드해 보려면 "설정에서 C++버전을 C++17 이상으로"
	inline static int cnt = 0;
public:
	Car() { ++cnt; }
	~Car() { --cnt; }

	static int get_count() { return cnt; } 
};




int main()
{

	std::cout << Car::get_count() << std::endl;
	Car c1;
	Car c2;

	std::cout << Car::get_count() << std::endl;
	std::cout << c1.get_count() << std::endl;  

}


