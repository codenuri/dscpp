#include <iostream>

// 방법 #3. static member data
// => 모든 객체가 하나의 멤버 데이타 공유
// => 객체 갯수 파악 성공

// => 멤버 이므로 private 놓을수도 있다.
//    다음 단계에서. 


class Car
{
	int color;
public:
	
//	int cnt = 0;		// instance 멤버 데이타. 객체당 한개씩 생성된다.
						//  C++ : non-static member data 라는 용어
						// 다른 언어 : instance field 라는 용어

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

	// 아래 3줄은 모두 동일한 cnt. 즉
	// 클래스 이름과 객체이름으로 모두 접근 가능
	// => 클래스 이름을 접근을 권장
	std::cout << Car::cnt << std::endl; // 2   <= 권장
	std::cout << c1.cnt << std::endl; // 2		<= 되도록 이렇게 하지마세요
	std::cout << c2.cnt << std::endl; // 2

	// 2가지 방법을 모두 제공하고, 그중 한개를 권장
	// => 차라리 한가지만 제공하면 좋지 않나요 ??
	// => C#, Java, Rust, Swift 등 대부분의 다른 언어는 "클래스 이름"만 가능

}

