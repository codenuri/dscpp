#include <list>

// 1. list 의 모든 기능을 물려 받아서
// 2. 멤버함수 이름만 stack 처럼 보이게 변경해 봅시다.

template<typename T>
class stack : public std::list<T>
{
public:
	void push(const T& e) { std::list<T>::push_back(e); }
	void pop()            { std::list<T>::pop_back(); }
};

int main()
{
	stack<int> s;
	s.push(10);
	s.push(20);
	s.pop();
}