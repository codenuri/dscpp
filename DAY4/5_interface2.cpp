#include <iostream>




// 카메라나 사람을 먼저 설계하지말고 
// 규칙(인터페이스)를 먼저 설계 합니다.

// 규칙 : 모든 카메라는 아래 클래스로 부터 파생 되어야 한다.

class ICamera
{
public:
	virtual void take() = 0;
};

// 진짜 카메라가 없어도, 사용하는 코드를 만들수 있습니다.
// "규칙 대로만 사용" 하면 됩니다.

class People
{
public:
	void use_camera(ICamera* c) { c->take(); }
};

// 이제 모든 카메라 제품은 규칙을 지켜야 합니다.
class Camera : public ICamera
{
public:
	void take() { std::cout << "take picture" << std::endl; }
};

class HDCamera : public ICamera
{
public:
	void take() { std::cout << "take HD picture" << std::endl; }
};


int main()
{
	People p;

	Camera c;
	p.use_camera(&c);

	HDCamera hc;
	p.use_camera(&hc); // ?

}



