#include <iostream>

class Point
{
	int x = 0, y = 0;
public:
	Point() { std::cout << "Point()" << std::endl; }
	Point(int a, int b) { std::cout << "Point(int, int)" << std::endl; }
};

class Rect
{
	Point ptFrom;
	Point ptTo;
public:
	Rect()
	{
		// call Point::Point()   <== ptFrom
		// call Point::Point()   <== ptTo   

		std::cout << "Rect()" << std::endl;
	}
};
int main()
{
	Rect r;
}



