// Vector.cpp
// => .cpp 에서는 Vector 라는 것이 클래스라는 것을
// => 컴파일러에게 알려야 하므로 선언을 포함해야 합니다.
#include "Vector.h" 
#include <cstring>

Vector::Vector(int size, int value /*= 0*/) : sz{ size }
{
	ptr = new int[sz];

	for (int i = 0; i < sz; i++)
		ptr[i] = value;
}

Vector::~Vector()
{
	delete[] ptr;
}

int& Vector::at(int idx)
{
	return ptr[idx];
};

int Vector::size()
{
	return sz;
}

bool Vector::empty()
{
	return sz == 0;
}

void Vector::resize(int newsize)
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