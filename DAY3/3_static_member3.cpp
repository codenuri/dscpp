#include <iostream>

// 방법 #3. static member data



class Car
{
	int color;
public:
	
//	int cnt = 0;		// 멤버 데이타. 객체당 한개씩 생성된다.

	static int cnt;		// static 멤버 데이타. 
						// => 클래스 외부에 별도 정의를 만들고 초기화.
						// #1. 객체를 생성하지 않아도 메모리 존재(외부 정의가 결국 전역변수 생성모양) 
						// #2. 객체 생성시, static 이 아닌 멤버만 개별객체에 생성
						//     모든 객체가 공유하는 멤버
						// #3. 접근시 "Car::cnt" 또는 "c1.cnt", "c2.cnt" 모두 가능 
						// 

	Car() { ++cnt; }
	~Car() { --cnt; }
};
int Car::cnt = 0;


int main()
{
	Car c1;
	Car c2;

	std::cout << Car::cnt << std::endl; // 2
	std::cout << c1.cnt << std::endl; // 2
	std::cout << c2.cnt << std::endl; // 2
}

