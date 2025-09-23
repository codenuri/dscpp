#include <iostream>
#include <vector> // 이미 C++표준에 vector 가 있습니다.
				  // 아래와 유사하지만, 훨씬 고급스럽게 만들어져 있습니다.

template<typename T>
class Vector
{
private:
	T* ptr;
	int _size;
public:
	Vector(int sz)
	{
		_size = sz;
		ptr = new T[_size];
	}
	~Vector() { delete[] ptr; }

	T& at(int idx) { return ptr[idx]; }

	void resize(int newsize)
	{
		if (_size < newsize)
		{
			T* tmp = new T[newsize];

			memcpy(tmp, ptr, sizeof(T) * _size);
			delete[] ptr;
			ptr = tmp;
			_size = newsize;
		}
		else
		{

		}
	}
	int size() { return _size; }

	bool empty() { return _size == 0; }
};

int main()
{
//	Vector<int>    v1(4);
//	Vector<double> v2(4);

	std::vector<int>    v1(4);
	std::vector<double> v2(4);

	v1.at(0) = 3;
	v2.at(0) = 3.4;

	v1.resize(8);

	std::cout << v1.at(0) << std::endl;
	std::cout << v2.at(0) << std::endl;

	std::cout << v1.size() << std::endl;
	std::cout << v1.empty() << std::endl;

}

