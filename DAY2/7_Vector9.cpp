#include <iostream>

// 함수뿐 아니라 class(struct) 도 템플릿을 할수 있습니다.

// 타입이 아닌 "타입을 만드는 틀"

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
	// 클래스 템플릿 사용시에는 대부분 타입을 전달해야 합니다.
	Vector<int>    v1(4);
	Vector<double> v2(4);

	v1.at(0) = 3;
	v2.at(0) = 3.4;

	std::cout << v1.at(0) << std::endl;
	std::cout << v2.at(0) << std::endl;

}


