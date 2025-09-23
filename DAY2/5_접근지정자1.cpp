// 4_접근지정자1 - 76page
#include <iostream>
#include <string>
// 타입을 설계 할때
// => 사용자가 제대로 사용하기 쉽게
// => 잘못 사용하기 어렵게 해라!

struct Person
{
private:					// private 영역
	std::string name;		// => 이 영역의 모든 멤버는
	int  age;				// => 멤버 함수에서만 접근 가능
							// => 멤버 함수가 아닌 곳에서 접근시 에러

public:						// public 영역
	void set_age(int a)		// => 이 곳의 멤버는 어디서든 접근가능
	{
		age = a;
	}
};

int main()
{
	Person p;

//	p.age = -10;	// error. 
	p.set_age(-10); // ok

				 
}
