#include <iostream>
#include <vector>

// 아래 코드의 핵심

// #1. 모든 파생 클래스(도형)의 공통의 특징이 있다면
//     기반 클래스(Shape)에도 있어야 한다
// => 문법적인 제약이 아닌
// => 객체지향 디자인의 원칙
// => 그래야지 Shape* 로 해당 특징을 사용할수 있다.


// #2. 기반 클래스가 가진 멤버 함수중에서 파생 클래스가 재정의 하게 되는것은
//     virtual 로해야 한다.
// => 문법적인 제약이 아닌 디자인의 원칙.


// [참고]
// => 실전에서는 
// 1. Shape 를 제일 먼저 설계하고,  모든 도형을 특징을 담고,
//    virtual 로 만들것과
//    non-virtual 로 할것을 구별해서 설계...

// 2. 그리고, Rect, Circle 만들기.. 


class Shape
{
	int color = 0;
public:
	virtual ~Shape() {}

	// 아래 멤버 함수는 virtual 로 할까요 ? 말까요 ?
	// => 파생 클래스가 다시 만들필요 없습니다.
	// => non-virtual
	// => virtual 로 해도 동작하지만, 느립니다. virtual 일 이유 없음.
	void set_color(int c) { color = c; }

	// 아래 함수는 ?
	// => 도형의 면적을 구하는 알고리즘은 도형 마다 다릅니다.
	// => 파생 클래스가 override 해야 하고
	// => override 된것 호출되게 해야 합니다. 
	// => virtual 
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
				s->draw(); 
			}
		}
	}
}

