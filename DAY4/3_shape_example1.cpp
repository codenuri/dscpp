// 예제1     149 page
#include <iostream>
#include <vector>

// 파워 포인트 같은프로그램을 객체지향으로 만드는 것을 생각해 봅시다.

// 핵심 #1. 모든 도형을 타입으로 설계하면 편리하다.

class Rect
{
public:
	void draw() { std::cout << "draw rect\n"; }
};


int main()
{
	std::vector<Rect*> v;
}



