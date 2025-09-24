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
// 3. Student 의 생성자 만드세요	<== 핵심
// 4. main 에서 Student 객체 생성하세요

class Student : public People
{
	int id;
public:
	// 아래 처럼 만들면 에러 입니다. - People 에 디폴트 생성자가 없다!
	// 사용자 코드					// 컴파일러가 변경한것
	//Student(int id) : id{id} { }	// Student(int id) : People{}, id{id} { }


	// 1. Student 설계자는 People 에 디폴트 생성자가 없다는 것을 알아야 합니다.
	// 2. People 의 생성자가 name, age 를 요구하는 것을 알고 있어야 하고.
	// 3. 아래 처럼 Student 생성자로 받아서 전달해야 합니다.
	// => 내일 부터 많이 사용하는 코드입니다.
	Student(const std::string& name, int age, int id) 
		: People{ name, age }, id { id } {}

};

int main()
{
	Student s{ "kim", 20, 1 }; // ok
	People p{ "kim", 20 }; // ok
}



