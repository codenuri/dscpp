#include <vector>
#include <string>

// const & 가 좋지만 문법설명을 위해 call by value 사용
void f1(std::string s)      {}
void f2(std::vector<int> v) {}

int main()
{
	f1("hello");
	std::string s1("hello");
	std::string s2 = "hello";
	
	f2(10);
	std::vector<int> v1(10);
	std::vector<int> v2 = 10;
}