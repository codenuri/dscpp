#include <iostream>

struct Point
{
	int x, y;
};

void foo(int n)    {} 

void goo(Point pt) {}

int main()
{
	Point p = { 1,2 };

	foo(3);	    // int n = 3
	foo({ 3 });	// int n = {3}

	goo(p);		// Point pt = p
	goo({1,1});	// Point pt = {1,1}
				// 요즘 널리 사용되는 표기법. 알아 두세요
				// C+11 의 {} 초기화 때문에 가능해진 문법
}
Point hoo()
{
	return { 0, 0 }; // 이 표현도 가능
					 // return Point{0,0} 의 의미. 
					// 5일차에 좀더 정확히 설명..
					// 임시객체를 알아야 정확한 이해가 가능. 
}




