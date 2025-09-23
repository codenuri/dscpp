#include <iostream>
#include <string>

class Person
{
private:
	std::string name;
	int  age;
public:
	// 생성자(constructor)
	// 1. class 이름과 동일한 이름의 함수
	// 2. 반환 타입을 표기하지 않고, 반환 값도 없다.
	// 3. 객체를 만들면 자동으로 생성자가 호출된다.
	Person(const std::string& n, int a)
	{
		name = n;
		age = a;
	}
};

int main()
{

	Person p("kim", 28); 

}



