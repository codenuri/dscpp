#include <iostream>
#include <vector>

// 핵심 #4. 해결책 #1. 캐스팅

class Shape
{
	int color = 0;
public:
	virtual ~Shape() {}
};

class Rect : public Shape
{
public:
	void draw() { std::cout << "draw rect\n"; }
};

class Circle : public Shape
{
public:
	void draw() { std::cout << "draw circle\n"; }
};


int main()
{
	std::vector<Shape*> v;

	while (1)
	{
		int cmd;
		std::cin >> cmd;

		if (cmd == 1) v.push_back(new Rect);
		else if (cmd == 2) v.push_back(new Circle);
		else if (cmd == 9)
		{
			for (auto s : v) 
			{
				// C++17 if 문입니다. (언어버전 C++17 으로)
				if (Rect* r = dynamic_cast<Rect*>(s); r != nullptr)
				{
					r->draw();
				}
				else if (Circle* c = dynamic_cast<Circle*>(s); c != nullptr)
				{
					c->draw();
				}

			}
		}
	}
}


