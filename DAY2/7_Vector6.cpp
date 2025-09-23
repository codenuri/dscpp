#include <iostream>

class Vector
{
private:
	int* ptr;
	int size;
public:
	Vector(int sz)
	{
		size = sz;
		ptr = new int[size];
	}
	~Vector()  { delete[] ptr; }

	// 핵심
	// int  반환 : ptr[idx] 메모리에 있는 값 반환
	// int& 반환 : ptr[idx] 메모리의 별명 반환

	// int& 반환하면 함수 호출을 등호의 왼쪽에 놓을수 있습니다.
	// "v.at(0) = 5;" 가 가능해 집니다.
	// "v[0] = 5;" 와 유사해 졌습니다. -이렇게 하는것은 금요일에

	int& at(int idx)
	{
		return ptr[idx];
	}
};

int main()
{
	Vector v(4); 

	v.at(0) = 5;	
	
	int k = v.at(0); // v[0] 의 의미

	std::cout << k << std::endl;
}