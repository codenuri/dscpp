#include <iostream>
#include <vector>

// 핵심 #3. 왜 에러일까 ?
//         해결책은 ?

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

		if      (cmd == 1) v.push_back(new Rect);
		else if (cmd == 2) v.push_back(new Circle);
		else if (cmd == 9)
		{
			for (auto s : v)
			{
				s->draw();
			}
		}
	}
}
// 에러가 나는 곳을 찾고.. 
// 에러의 원인을 생각해 보세요
// 해결책도 생각해 보세요


