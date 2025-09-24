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

	// at() 을 const member function 로 할까요 ?? 하지 말까요 ??
	// => 아주 어려운 문제.
	// => 단지, "멤버 함수안에서 상태 변경이 없다.." 정도만이 아닌
	// => 사용하는 코드를 고려 하세요. 
	// => 다음 단계부터 해결.. 
	int& at(int idx)
	{
		return ptr[idx];
	};

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
};

int main()
{
	Vector v1(5);
	v1.at(0) = 7;
	std::cout << v1.at(0) << std::endl;
}

