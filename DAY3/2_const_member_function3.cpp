#include <iostream>
#include <string>

// const member function 은 필수 문법
// => 필요한 곳에는 반드시 붙여야 합니다.
// => 그런데, 꽤 어렵습니다!

class Point
{
	int x, y;
public:
	Point(int a, int b) : x{ a }, y{ b } {}

	// 아래 멤버 함수는 "상수 객체라도 호출 가능" 해야 합니다.
	// => const member function 으로!!
	// => 앞으로 멤버 함수 만들때 const member function 으로 할지/말지를
	//    잘 판단하세요. 항상 생각해야 합니다.
	std::string to_string() const 
	{
		std::string s = std::to_string(x) + ", " + std::to_string(y);
		return s;
	}

};

int main()
{
	const Point pt{ 1, 2 };

	std::cout << pt.to_string() << std::endl;
	std::cout << pt.to_string() << std::endl;
}

