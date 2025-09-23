// 5_생성자1.cpp - 80 page
#include <iostream>
#include <string>

class Person
{
private:
	std::string name;
	int  age;
public:
	void init(const std::string& n, int a)
	{
		name = n;
		age = a;
	}
};

int main()
{
	// #1. class 도 결국 struct 와 동일 합니다.
	// => 따라서, 모든 멤버데이타가 public 에 있다면 아래 처럼 초기화 가능
	// => 단, 멤버데이타가 private 이라면 아래 코드는 에러
//	Person p = { "kim", 28 };

	// #2. 멤버 함수를 사용해서 초기화
	Person p;
	p.init("kim", 28);

}



