#include <iostream>
#include <vector>

// 핵심 #4. 해결책 #1. 캐스팅

// OCP 이론
// 기능 확장에는 열려있고(Open, 새로운 클래스/모듈 이 추가 되어도)
// 기존 코드는 수정되지 않게(Close, 코드 수정에는 닫혀 있게)
// 만들라는 이론(Principle )

// => Open Close Principle(개방폐쇄의 법칙)
// => 객체지향 프로그래밍 만들때 지켜야 하는 5개의 원칙
//    SRP, OCP, LSP, ISP, DIP => 앞자를 따서 "SOLID" 원칙

// 아래 main 의 캐스팅 코드는 "OCP" 위반. 안좋은 코드

// 당장 구현만 신경쓰지 말고, 유지 보수르를 고려 하라는 것이 
// => 객체지향의 핵심 


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

class Triangle : public Shape
{
public:
	void draw() { std::cout << "draw triangle\n"; }
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


