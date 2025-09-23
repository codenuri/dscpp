#include <iostream>

int g = 10;

class Test
{
	int v1 = ++g;	// 필드 초기화에는 절대 이런 코드 사용금지
	int v2 = 0;		// 이처럼 리터럴 정도만 사용하세요. 
public:
	Test() {}					// Test()      : v1{++g}, v2{0} {}
	Test(int a) : v1{ a } {}	// Test(int a) : v1{a},   v2{0} {}
};

int main()
{
	Test t1;
	Test t2(3);

	std::cout << g << std::endl; // 얼마 나올지 예측해 보세요  11
}