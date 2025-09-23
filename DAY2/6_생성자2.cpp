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
	// 4. 생성자는 여러개 만들어도 된다.
	Person(const std::string& n, int a)
	{
		name = n;
		age = a;
		std::cout << "생성자1\n";
	}
	Person()
	{
		name = "";
		age = 0;
		std::cout << "생성자2\n";
	}
	// 소멸자(destructor)
	// => ~클래스이름()
	// => 오직 한개만 만들수 있다.
	// => 반환타입이 없고, 인자도 없다.
	// => 객체가 파괴 될때 호출
	~Person() { std::cout << "Person 파괴\n"; }
};

int main()
{
	Person p1("kim", 28); // 생성자 1사용
	Person p2;			  // 생성자 2사용

} //<== p1, p2 파괴. 소멸자 호출됨. 



