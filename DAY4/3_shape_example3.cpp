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
			for (auto s : v) // 현재 auto 타입은 Shape*
			{
				s->draw(); // A. error
			}
		}
	}
}
// 에러가 나는 곳을 찾고.. 
// 에러의 원인을 생각해 보세요
// => A 부분에서 s의 타입은 Shape* 
// => (실제 객체는 Rect, Circle 이지만)포인터 타입은 Shape*
// => 그런데, Shape에는 draw() 가 없다
// => "기반 클래스 포인터로 파생 클래스 고유 멤버 접근 안됨"
// 
// 해결책도 생각해 보세요
// => 다음소스 부터.. 


