#include <list>

// 1. list 의 모든 기능을 물려 받아서
// 2. 멤버함수 이름만 stack 처럼 보이게 변경해 봅시다.

// private 상속의 디자인 철학 
// => 기반 클래스로 부터 구현은 물려받지만(파생 클래스가 내부적으로는 사용)
// => 인터페이스는 물려받지 않겠다.(하지만 기반 클래스 멤버를 파생클래스가 외부 노출안함)

template<typename T>
class stack : private std::list<T>
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

//	s.push_front(10); // 잘못 사용했다. 
					  // private 상속하면 private 이 되므로 사용못함
					  // 컴파일 에러.. 
}