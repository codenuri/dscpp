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
			// 크기가 작아 질때 - 과제로 생각해 보세요
			// 금요일에 배우게 됩니다.
		}		
	}
};

int main()
{
	Vector v(4);	// 4개크기 동적 배열

	v.at(0) = 5;	// 요소 접근은 at() 멤버 함수

	v.resize(8);	// 진짜 배열을 크기 변경 안되지만
					// Vector 는 크기 변경 가능
	int k = v.at(0);
	std::cout << k << std::endl; // 5
}

// 사용자 입장에서는
// => Vector 의 멤버 데이타(private)은 알필요 없다.
// => 단지, public 에 있는 멤버 함수 사용법만 알면된다.
// => 정보 은닉