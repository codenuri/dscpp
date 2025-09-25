// 4_인터페이스 - 159 page ~
#include <iostream>

class Camera
{
public:
	void take() { std::cout << "take picture" << std::endl; }
};

class HDCamera
{
public:
	void take() { std::cout << "take HD picture" << std::endl; }
};

class People
{
public:
	void use_camera(Camera* c) { c->take(); }
	void use_camera(HDCamera* c) { c->take(); }
};

int main()
{
	People p;

	Camera c;
	p.use_camera(&c);

	HDCamera hc;
	p.use_camera(&hc); // ?

}

// 위 코드는 OCP 를 만족하지 못하는 코드 입니다.
// => 새로운 HDCamera 가 추가될때
// => People 코드가 수정되었습니다.

