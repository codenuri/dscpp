#include <iostream>

// 스마트 포인터는 "임의 타입"에 대해서 동작해야 합니다.
// => template 으로 만드는 것이 원칙

template<typename T>
class Ptr
{
	T* obj;
public:
	Ptr(T* p) : obj{ p } {}
	T* operator->() { return obj; }
	T& operator*() { return *obj; }
	~Ptr() { delete obj; }
};
int main()
{
	Ptr<int> p1 = new int;

	*p1 = 10;
	std::cout << *p1 << std::endl;

	// delete 필요 없음.
}