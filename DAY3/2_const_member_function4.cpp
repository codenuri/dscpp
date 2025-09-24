#include <iostream>
#include <string>

class Point
{
	int x, y;

	// mutable 멤버 데이타 
	// => 상수 멤버 함수에서도 값을 변경할수 있게 해달라는 것
	// 
	// 논리적 상수성
	// => to_string() 은 내부적으로 x, y 가변경되지 않으므로
	//    외부사용자 입장에서는 "const member function" 이 맞습니다
	// => 하지만, 다양한 테크닉을 위해서 멤버 값을 수정해야 할 경우가 있습니다.
	// => 이런 것을 논리적 상수성이라고 하고
	// => mutable 키워드로 해결. 

	mutable std::string cache;
	mutable bool cache_valid = false;

public:
	Point(int a, int b) : x{ a }, y{ b } {}

	std::string to_string() const
	{
		if (cache_valid == false)
		{
			cache = std::to_string(x) + ", " + std::to_string(y);
			cache_valid = true;
		}
		return cache;
	}

};

int main()
{
	const Point pt{ 1, 2 };

	std::cout << pt.to_string() << std::endl;
	std::cout << pt.to_string() << std::endl;
}

