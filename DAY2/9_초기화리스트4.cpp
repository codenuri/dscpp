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
	// 초기화 리스트로 초기화하면
	// => 생성자를 통해서 값을 넣은것 
	Person2(const std::string& n, int a) : name{n}, age{a}
	{
		// call string::string(const std::string&) <= 이렇게 변경
		//						n					즉, 한번의 생성자 호출로 초기화
			
	}
};

Person2 p2{ "kim", 20 };

// 위 코드를 godbolt.org 에서 확인하려면 
// std::string 은 진짜 클래스 이름이 아닙니다.
// => 별명입니다.
// => 실제 이름은 basic_string<> 이라는 템플릿 입니다
// using string = basic_string<char, std::char_trait<char>, std::allocator<char>>;

// 따라서 어셈코드에서 basic_string<...> 이 나오면 string 이라고 생각하세요