#include <iostream>
#include <vector>

// 핵심 #2. 모든 도형의 기반 클래스인 Shape 가 있다면
// => 모든 도형의 공통의 특징을 한 곳(Shape) 에서 관리 가능
// => 모든 도형을 하나의 컨테이너에 보관 가능

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
	std::vector<Shape*> v;  // 모든 도형을 보관 가능한 컨테이너
}



