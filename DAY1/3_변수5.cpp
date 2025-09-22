// 3_변수5
// 30 page ~
// C 언어 스타일로 타입의 별명 만들기 
//typedef int DWORD;
//typedef void(*PF)();	// 함수 포인터 타입

// C++11 부터 위 2줄은 아래 처럼 사용해도 됩니다.
// 아래 2줄은 위 2줄과 완벽히 동일
using DWORD = int;
using PF = void(*)();

int main()
{
	DWORD n; // int n
	PF    f; // void(*f)()
}

