// 컴파일 + 실행 : Ctrl + F5
// 도구 메뉴-옵션메뉴 : 폰트, 색상등 변경
// 2_namespace.cpp - 교재 6 page
#include <stdio.h>

// namespace
// 1. 프로그램의 구성요소를 논리적으로 분리
// 2. 이름 충돌등을 막을수 있다.

namespace Audio
{
	// Audio 관련 모든 코드(함수, 구조체, 전역변수)를 이곳에 작성
	void init() { printf("Audio init\n");	}
}
namespace Video
{
	void init() { printf("Video init\n"); }
}
// global namespace 
void init() { printf("global init\n"); }

int main()
{
	init(); // global
	Audio::init();
	Video::init();
}
