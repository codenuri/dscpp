#include <iostream>

int g = 10;

class Test
{
	int v1 = ++g;
	int v2 = 0;
public:
	Test() {}
	Test(int a) : v1{ a } {}
};

int main()
{
	Test t1;
	Test t2(3);

	std::cout << g << std::endl; // 얼마 나올지 예측해 보세요
}