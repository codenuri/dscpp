#include <vector>
#include <string>

// const & 가 좋지만 문법설명을 위해 call by value 사용
void f1(std::string s)      {}
void f2(std::vector<int> v) {}

int main()
{
	f1("hello");	// 코드가 자연스럽습니다. 돼야 합니다
					// ok. 잘 됩니다.
					// 결국 string 은 복사 초기화가 된다는 것
	std::string s1("hello");   // ok
	std::string s2 = "hello";  // ok
								// string(const char*) 생성자는 
								// explicit 가 아니라는 의미. 
	
	f2(10);	// 코드가 자연스럽지 않습니다. 안되는게 좋습니다.
			// 현재 error. 입니다.
			// std::vector 는 복사 초기화 안됩니다.
	std::vector<int> v1(10);	// ok
	std::vector<int> v2 = 10;	// error
}
// 결론 
// 1. 생성자가 explicit 가 아니면
// => 복사 초기화, 직접 초기화는 동일!!

// 2. 생성자가 explicit 라면
// => 직접 초기화만 가능