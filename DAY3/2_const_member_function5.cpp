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

	int& at(int idx)
	{
		return ptr[idx];
	};
	int size() { return sz; }
	bool empty() { return sz == 0; }

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
};

int main()
{
	Vector v1(5);
	v1.at(0) = 7;
	std::cout << v1.at(0) << std::endl;
}

