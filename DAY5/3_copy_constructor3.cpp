#include <iostream>

// 왜 복사 생성자가 중요합니까 ?
// 컴파일러가 만들어 주는것 그냥 사용하며 안되나요 ?
// => Point, Rect, Date 등의 타입은 컴파일러 버전 그냥 사용하면됩니다.

// 그런데, 컴파일러 제공 버전이 문제가 되는 경우가 있습니다.

class Vector
{
private:
	int* ptr;
	int  sz;
public:
	Vector(int size, int value) : sz{ size }
	{
		ptr = new int[sz];
		for (int i = 0; i < sz; i++)
			ptr[i] = value;
	}
	~Vector() { delete[] ptr; }
};

	

int main()
{
	Vector v1{ 4, 0 };
	
}
