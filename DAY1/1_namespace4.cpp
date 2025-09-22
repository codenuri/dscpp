// 10 page 

//#include <stdio.h>  // C 언어 헤더. printf 등이 global 에만 존재
#include <cstdio>	  // C++에서 다시 만든 C언어용 헤더
					  // printf 등이 global 에도 있고, std 에도 존재

// C++ 은 
// 1. C언어 헤더를 그대로 모두 사용가능합니다
// 2. 하지만 C++ 이 C 헤더를 다시 만든 버전도 있습니다.

//	C				C++ 다시 만든 버전
// <xxxx.h>	  ===>	<cxxxx>
// <stdio.h>  ===>  <cstdio>
// <stdlib.h> ===>  <cstdlib>
// <string.h> ===>  <?>
// <math.h >  ===>  <?>


int main()
{
	// C++ 은 C언어의 대부분을 포함 합니다.
	// printf 는 C표준이기도 하지만 C++ 표준이기도 합니다.

	printf("hello\n"); // ok
	std::printf("hello\n"); // ??
}
