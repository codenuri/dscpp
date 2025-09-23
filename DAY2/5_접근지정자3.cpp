#include <iostream>
#include <string>

// C++ Code
class Person
{
private:				
	std::string name;
	int  age;

public:
	void set_age(int a)
	{
		if (a > 0 && a < 150)
			age = a;
	}
};
// Java, C#, Swift 등의 대부분의 언어는 멤버마다 표기
class Person
{
	private	std::string name;
	private int  age;

	public void set_age(int a)
	{
		if (a > 0 && a < 150)
			age = a;
	}
};