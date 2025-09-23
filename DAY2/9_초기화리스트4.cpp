#include <string>

class Person1
{
	std::string name;
	int age;
public:
	// 초기화 리스트를 사용하지 않은 경우
	// => name 이 어떻게 초기화 되는지 생각해 보세요
	Person1(const std::string& n, int a) 
	{
		// call string::string() <== 1. name 에 대해서 디폴트 생성자 호출

		name = n; // 2. 대입연산자 호출 ( name.operator=(n) )
				  // 즉, 이 코드는 대입 
				  // 2번의 함수 호출로 name에 n을 넣은것

		age = a;
	}
};

Person1 p1{ "kim", 20 };





class Person2
{
	std::string name;
	int age;
public:
	Person2(const std::string& n, int a) : name{n}, age{a}
	{
	}
};

Person2 p2{ "kim", 20 };