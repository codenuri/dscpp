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
	// 이제 Vector 제작자는 
	// => 사용자들이 유용하게 사용할수 있는 멤버 함수를 제공하면 됩니다.
	int size() { return _size; }

	bool empty() { return _size == 0; }
};

int main()
{
	Vector v(4);	

	v.resize(8);	

	std::cout << v.size() << std::endl;

}

