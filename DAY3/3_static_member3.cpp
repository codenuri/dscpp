#include <iostream>

// 방법 #3. static member data



class Car
{
	int color;
public:
	
//	int cnt = 0;		// 멤버 데이타. 객체당 한개씩 생성된다.

	static int cnt;		// static 멤버 데이타. 
						// 모든 객체가 공유하는 멤버
						// 클래스 외부에 별도 정의를 만들고 초기화.

	Car() { ++cnt; }
	~Car() { --cnt; }
};
int Car::cnt = 0;


int main()
{
	Car c1;
	Car c2;

	std::cout << Car::cnt << std::endl; // 2
}

