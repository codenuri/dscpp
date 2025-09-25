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

	int& at(int idx)		
	{
		return ptr[idx];
	}
	const int& at(int idx) const	
	{
		return ptr[idx];
	}

	// at => operator[]
	int& operator[](int idx)
	{
		return ptr[idx];
	}
	const int& operator[](int idx) const
	{
		return ptr[idx];
	}
};
int main()
{
	Vector v1(5, 0);
	const Vector v2(5, 0);


	v1.at(0) = 10;		
	int n1 = v1.at(0);
	int n2 = v2.at(0);


	// at() 뿐 아니라 []도 가능하도록 해봅시다. - 진짜 배열처럼
	v1[0] = 10;		
	int n3 = v1[0];
	int n4 = v2[0];
}