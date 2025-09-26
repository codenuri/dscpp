#include <iostream>

// C++98 : 표준 라이브러리가 많이 부족했습니다
//         그래서, 개발자가 많은 도구를 직접 만들어서 사용해야 했습니다
//         그래서, "복사 생성자"는 가장 중요한 내용이었습니다.

// C++11 이후 : 표준 라이브러리가 아주 많아졌습니다.
//        사용자가 웬만한것은 만들 필요 없습니다.
//	      그래서, 일반 개발자가 복사 생성자를 직접 만드는 경우는 많지 않습니다.

// 하지만 오픈소스 레벨의 코딩에서는 아직도 직접 만드는 경우가 많고,
// 대부분의 모든언어에 "얕은 복사/깊은복사" 개념 사용됨...
// => 따라서, 반드시 메모리 그림 이해해 놓으세요


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

	// Deep Copy(깊은 복사)로 구현한 복사 생성자
	// => 주소만 복사하는 것이 아닌, 메모리 자체를 복사 하는것
	Vector(const Vector& other) : sz{other.sz}
	{
		// #1. 포인터가 아닌 멤버는 그냥 복사
		// sz = other.sz; // 이렇게 하지말고, 초기화 리스트

		// #2. 포인터 멤버의 경우
		//	   새로운 메모리 할당후, 메모리 자체를 복사

		ptr = new int[sz];
		memcpy(ptr, other.ptr, sizeof(int) * sz);
	}
};

int main()
{
	Vector v1{ 4, 0 }; 

	Vector v2 = v1;    



}
