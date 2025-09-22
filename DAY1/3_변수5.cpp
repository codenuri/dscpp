// 3_변수5
// 30 page ~
// C 언어 스타일로 타입의 별명 만들기 
//typedef int DWORD;
//typedef void(*PF)();	// 함수 포인터 타입

// C++11 부터 위 2줄은 아래 처럼 사용해도 됩니다.
// 아래 2줄은 위 2줄과 완벽히 동일
using DWORD = int;
using PF = void(*)();

// typedef : 타입의 별명만 만들수 있다.
// using   : 타입의 별명과 "템플릿의 별명"을 만들수 있다.
//							^ 이 특징을 위해 만든것

int main()
{
	DWORD n; // int n
	PF    f; // void(*f)()
}

