#include <iostream>

// 강한 결합(tightly coupling)
// => 하나의 클래스가 다른 클래스 사용시 클래스 이름을 직접사용하는것
// => People::use_camera(HDCamera*)
// => 교체 불가능한 경직된 디자인








// 규칙 : 모든 카메라는 아래 클래스로 부터 파생 되어야 한다.

class ICamera
{
public:
	virtual void take() = 0;
};

class People
{
public:
	void use_camera(ICamera* c) { c->take(); }
};

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

class UHDCamera : public ICamera
{
public:
	void take() { std::cout << "take UHD picture" << std::endl; }
};

int main()
{
	People p;

	Camera c;
	p.use_camera(&c);

	HDCamera hc;
	p.use_camera(&hc); 

	UHDCamera uhc;
	p.use_camera(&uhc); 
}



