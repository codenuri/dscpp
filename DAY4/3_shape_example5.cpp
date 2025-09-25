#include <iostream>
#include <vector>

// 아래 코드의 핵심

// #1. 모든 파생 클래스(도형)의 공통의 특징이 있다면
//     기반 클래스(Shape)에도 있어야 한다
// => 문법적인 제약이 아닌
// => 객체지향 디자인의 원칙
// => 그래야지 Shape* 로 해당 특징을 사용할수 있다.



class Shape
{
	int color = 0;
public:
	virtual ~Shape() {}

	void draw() { std::cout << "draw shape\n"; }
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
				s->draw(); 
			}
		}
	}
}

