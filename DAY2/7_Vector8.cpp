#include <iostream>

class Vector
{
private:
	int* ptr;
	int _size;
public:
	Vector(int sz)
	{
		_size = sz;
		ptr = new int[_size];
	}
	~Vector() { delete[] ptr; }

	int& at(int idx) { return ptr[idx]; }

	void resize(int newsize)
	{
		if (_size < newsize)
		{
			int* tmp = new int[newsize];

			memcpy(tmp, ptr, sizeof(int) * _size);
			delete[] ptr;
			ptr = tmp;
			_size = newsize;
		}
		else
		{
	
		}
	}
};

int main()
{
	Vector v(4);	

	v.at(0) = 5;	
	v.resize(8);	
	int k = v.at(0);
	std::cout << k << std::endl; 
}

