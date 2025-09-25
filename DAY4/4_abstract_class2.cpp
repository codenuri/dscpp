#include <iostream>
#include <vector>


class Shape
{
	int color = 0;
public:
	virtual ~Shape() {}

	void set_color(int c) { color = c; }


	// 가상함수      : 파생클래스가 override 하지 않으면 "기본 구현 제공"한다는 것
	// 순수 가상함수 : 파생클래스에게 반드시 구현 제공하라고 시키는것

//	virtual void draw() { std::cout << "draw shape\n"; } // 말도안되는 코드
	virtual void draw() = 0; // 좋은 코드!


	virtual Shape* clone() const = 0;

	// 방법 #1. 순수 가상함수
	// => 파생 클래스가 반드시 만들어야 합니다.
	// => 파생 클래스에서 하는 작업이 너무 많을수도 있습니다.
//	virtual int get_area() const = 0; 

	// 방법 #2. 구현되어 있지 않음을 나타내는 기본 값 반환
	// => 매뉴얼 작성
	// => "모든 도형에서 get_area() 호출시 0이 반환되면 
	//     크기를 구할수 없음" 으로 생각해라.. 라고.. 
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

