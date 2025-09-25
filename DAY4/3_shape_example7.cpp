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

	// 자기 자신의 복사본을 만드는 가상함수는 
	// 아주 널리 사용되는 알려진 테크닉입니다
	virtual Shape* clone() const 
	{
		Shape* s = new Shape; // 새로운 객체를 만들고
		s->color = color; // 자신의 모든 속성과 동일하게 설정.
		return s;
	}
};



class Rect : public Shape
{
public:
	void draw() override { std::cout << "draw rect\n"; }

	Shape* clone() const override
	{
		return new Rect;  // 실제로는 자신의 멤버 데이타와 동일하게 설정.
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

			// k 번째 도형의 복사본을 생성해서 v에 추가 합니다.
			// 어떻게 코드를 만들어야 할까요 ?
			// k 번째 도형은 뭘까요 ?

			/*
			// 해결책 #1. 조사!!
			// => OCP 를 만족할수 없는 좋지 않은 디자인.. 
			if (dynamic_cast<Rect*>(v[k]) != nullptr)
			{
				//...
			}
			else if (dynamic_cast<Circle*>(v[k]) != nullptr)
			{
				//... 복사본 생성후 v에 넣기 
			}
			*/

			// 해결책 #2. 다형성!!
			// => 조사할 필요 없습니다.
			// => 그냥 시키면 됩니다.
			// => "Don't Ask Do It" <== java 에서 널리 사용되는 용어
			v.push_back( v[k]->clone() ); 
		}

	}
}

