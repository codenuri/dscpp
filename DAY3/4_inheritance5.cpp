#include <iostream>
#include <vector>

class People
{
	std::string name;
	int age;
public:
	People(const std::string& name, int age) : name{name}, age{age} {}
};

// 아래 주석대로 만들어 보세요
// 1. People 로 부터 상속받는 Student 만드세요
// 2. int id 를 멤버로 추가하세요
// 3. Student 의 생성자 만드세요
// 4. main 에서 Student 객체 생성하세요


int main()
{
	People p{ "kim", 20 }; // ok
}



