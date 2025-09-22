#include <stdio.h>

namespace Audio
{
	void init() { printf("Audio init\n"); }
}
namespace Video
{
	void init() { printf("Video init\n"); }
}
// void init() { printf("global init\n"); }

int main()
{
	// 핵심 : namespace 에 있는 요소에 접근하는 3가지 방법

	// #1. 완전한 이름(qualified name)
	Audio::init();

	// #2. using declaration(선언)
	using Audio::init;	// init 은 Audio 이름없이 사용가능
	init();

	// #3. using directive(지시어)
	using namespace Audio; // Audio 의 모든 요소를 Audio 이름없이 사용
	init(); 
//	reset(); // 이런함수가 있다면 Audio 없이 가능.. 
}
