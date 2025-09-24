#include <iostream>
#include <string>

class Point
{
	int x, y;

	std::string cache;
	bool cache_valid = false;

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

