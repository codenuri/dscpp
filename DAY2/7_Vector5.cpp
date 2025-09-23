#include <iostream>

class Vector
{
private:
	// 동적 배열을 관리하는데 필요한 데이타를 생각하세요 
	int* ptr;
	int size;
public:
	Vector(int sz)
	{
		size = sz;
		ptr = new int[size];
	}
	// 생성자에서 자원(메모리, 파일, DB등)을 할당한 경우, 
	// 소멸자를 만들어서 해지 하는 것이 코딩관례
	~Vector()
	{
		delete[] ptr;
	}
};

int main()
{
	// 복습할때, 아래 한줄 실행시 메모리 모양을 반드시 그려 보세요
	// => 자주 사용되는 메모리 구조이므로 꼭 알아 두세요
	Vector v(4); // 크기가 4인 동적 배열
	
}