// 예제1     149 page
#include <iostream>
#include <vector>

// 파워 포인트 같은프로그램을 객체지향으로 만드는 것을 생각해 봅시다.

// 핵심 #1. 모든 도형을 타입으로 설계하면 편리하다.
// => 가상함수에 집중하기 위해 멤버 데이타, 생성자 등은 생략 - 복습시 추가해 보세요

class Rect
{
public:
	void draw() { std::cout << "draw rect\n"; }
};

class Circle
{
public:
	void draw() { std::cout << "draw circle\n"; }
};


int main()
{
	std::vector<Rect*> v; // Rect 만 보관 가능하다.
						  // Circle 보관 안됨.
			// => 따로 보관시, 먼저 만든 도형이 어떤 것인지 알수없다.
}



