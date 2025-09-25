#include <iostream>
#include <vector>


class Shape
{
	int color = 0;
public:
	virtual ~Shape() {}

	void set_color(int c) { color = c; }

	virtual int get_area() const { return 0; }

	virtual void draw() { std::cout << "draw shape\n"; }
};



class Rect : public Shape
{
public:
	void draw() override { std::cout << "draw rect\n"; }
};

class Circle : public Shape
{
public:
	void draw() override { std::cout << "draw circle\n"; }
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
				s->draw();	// 다형성(polymorphism)
							// => 동일한 코드가 상황에 따라(실제 객체가 무엇인가)
							//    다르게 동작하는 것

				// 객체 지향 프로그래밍의 3가지 특징
				// => 캡슐화(private, public). 안전성
				// => 상속(inheritance). 공통의 특징을 한곳에서, 모든 도형을 하나의 컨테이너에..
				// => 다형성(polymorphism). OCP 를 만족하는 설계

				// 이 코드에서 새로운 도형이 추가되어도
				// "s->draw()" 는 수정될 필요가 없습니다.
				// => OCP 를 만족하는 설계..!!!
				// => 그래서, 다형성이 객체지향 디자인의 핵심
			}
		}
	}
}

