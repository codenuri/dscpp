//#include <파일>  // 미리 약속된 디렉토리에서 찾아라
				   // 즉, C/C++ 표준 헤더 포함할때

//#include "파일"  // 현재 디렉토리에서 찾아라
			       // 사용자가 만든 헤더 포함할때


#include <iostream>		

// Vector 를 사용하려면
// 1. Vector.h 와 Vector.cpp 을 프로젝트에 추가하세요
// 2. 아래 처럼 코드를 작성하면 됩니다
// => main.cpp, vector.cpp 소스가 빌드 포함되어 있어야 합니다.
#include "Vector.h"

int main()
{
	Vector v1(5);
	v1.at(0) = 7;
	std::cout << v1.at(0) << std::endl;
}

