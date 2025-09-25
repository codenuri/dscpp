// 3일차소스- const member function 5-4

#include <iostream>
#include <cstring>

class Vector
{
	int* ptr;
	int sz;
public:
	Vector(int size, int value = 0)
	{
		sz = size;
		ptr = new int[sz];

		for (int i = 0; i < sz; i++)
			ptr[i] = value;
	}

	~Vector()
	{
		delete[] ptr;
	}



	int size() const { return sz; }
	bool empty() const { return sz == 0; }

	void resize(int newsize)
	{
		if (sz < newsize)
		{
			int* tmp = new int[newsize];
			memcpy(tmp, ptr, sizeof(int) * sz);
			delete[] ptr;
			ptr = tmp;
			sz = newsize;
		}
	}

	// 상수 객체 일때와 상수 객체가 아닐때 다르게 동작하게 하고 싶은 경우가 있습니다.
	// 아래 at() 같은 경우
	// => 의외로 이런 경우가 많이 있습니다.
	// => 해결책 2개 만드세요

	int& at(int idx)		// 상수 객체가 아닌 경우 호출
	{
		return ptr[idx];
	}
	const int& at(int idx) const	// 상수 객체인 경우 호출
	{
		return ptr[idx];
	}
};
int main()
{
	Vector v1(5, 0);
	const Vector v2(5, 0);


	v1.at(0) = 10;		// O				O
	v2.at(0) = 10;		// X				X	
	int n1 = v1.at(0);	// O				O
	int n2 = v2.at(0);	// O				O


}