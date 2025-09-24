// main.cpp
#include "foo.h"

// extern int x; // x를 만드는 것이 아니라
			  // x가 어딘가에 있다고 알리는 것
			  // 링커가 x를 찾아서 연결해 준다.
			  // 이 코드가 없으면 컴파일러는 
			  // x 를 모르기 때문에 에러
				// 이렇게 직접하기 보다는
				// foo.cpp 제작자가
				// foo.h 에 제공

int main()
{
	x = 10;
}