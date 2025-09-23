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
	~Vector() { delete[] ptr; }

	int& at(int idx) {	return ptr[idx];}

	void resize(int newsize)
	{
		if (size < newsize) // 크기가 커질때
		{
			int* tmp = new int[newsize];

			memcpy(tmp, ptr, sizeof(int) * size);

			delete[] ptr;

			ptr = tmp;

			size = newsize;			
		}
		else
		{
			// 크기가 작아 질때
		}		
	}
};

int main()
{
	Vector v(4);

	v.at(0) = 5;

	v.resize(8);

	int k = v.at(0);

	std::cout << k << std::endl; // 5
}