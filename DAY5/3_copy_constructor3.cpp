#include <iostream>

// 왜 복사 생성자가 중요합니까 ?
// 컴파일러가 만들어 주는것 그냥 사용하며 안되나요 ?
// => Point, Rect, Date 등의 타입은 컴파일러 버전 그냥 사용하면됩니다.

// 그런데, 컴파일러 제공 버전이 문제가 되는 경우가 있습니다.

// 클래스가 내부적으로 포인터 멤버가 있을때
// => 컴파일러가 제공하는 복사 생성자는 "동적할당한 메모리" 
//    자체를 복사하지 않고 주소만 복사하게 됩니다.
// 
// => 얕은 복사(shallow copy) 라고 합니다.

// 반드시 개발자가 직접 "복사 생성자" 를 만들어서
// 문제를 해결해야 합니다.

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
	Vector v1{ 4, 0 }; // 이 코드는 ok

	Vector v2 = v1;    // 여기서는 문제 없음.


	
} // <=== v1, v2 파괴 될때.. 여기서 문제..  메모리 2번해제. 
