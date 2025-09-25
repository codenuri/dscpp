#include <iostream>

class Point
{
	int x, y;
public:
	Point* operator&()
	{
		return nullptr;
	}
};

int main()
{
	Point pt;

	std::cout << &pt; // 결과 확인해 보세요
					  // pt.operator&()

}