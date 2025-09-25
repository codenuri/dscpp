#include <iostream>
#include <vector>


class Shape
{
	int color = 0;
public:
	virtual ~Shape() {}

	void set_color(int c) { color = c; }


	virtual void draw() { std::cout << "draw shape\n"; }

	virtual Shape* clone() const
	{
		Shape* s = new Shape; 
		s->color = color; 
		return s;
	}

	virtual int get_area() const { return 0; }
};



class Rect : public Shape
{
public:
	void draw() override { std::cout << "draw rect\n"; }

	Shape* clone() const override
	{
		return new Rect;  
	}
};

class Circle : public Shape
{
public:
	void draw() override { std::cout << "draw circle\n"; }

	Shape* clone() const override
	{
		return new Circle;
	}
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

		else if (cmd == 8)
		{
			std::cout << "몇번째 도형을 복제 할까요 >> ";

			int k;
			std::cin >> k;
			v.push_back(v[k]->clone());
		}

	}
}

