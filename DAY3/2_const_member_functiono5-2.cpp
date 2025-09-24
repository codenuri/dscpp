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

	int& at(int idx)
	{
		return ptr[idx];
	};
};

int main()
{
	// 우리가 만든 Vector 는 결국 동적 배열이므로 "배열과 동일하게 동작" 
	// 해야 합니다. 5-1.cpp 의 결과처럼
	      Vector v1(5, 0); // 5개를 0으로
	const Vector v2(5, 0); // 5개를 0으로

	// ? 에 되야하면 O, 안되야 하면 X 로 표기해 보세요
	//					// 원하는동작		현재 동작				
	v1.at(0) = 10;		// O				O
	v2.at(0) = 10;		// X				X

	int n1 = v1.at(0);	// O				O
	int n2 = v2.at(0);	// O				X <== 문제!

	// #1. at() 이 const 가 아닌 경우
}

