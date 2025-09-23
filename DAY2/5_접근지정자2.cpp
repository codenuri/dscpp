#include <iostream>
#include <string>


// struct 와 class 차이점
// struct : 접근 지정자 생략시 기본이 public
// class  : 접근 지정자 생략시 기본이 private

// C++ 에서는 위 차이점 밖에 없습니다. 
// C#, Java : 완전히 다른 문법. 각 언어 참고
// Rust : struct 만 존재. 

//struct Person
class Person
{
//private:				
	std::string name;	
	int  age;			


public:					
	void set_age(int a)		
	{
		if (a > 0 && a < 150)
			age = a;
	}
};

int main()
{
	Person p;


	p.set_age(-10);


}
