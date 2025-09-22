#include <iostream>

// C++은 용도별로 사용하기 위해
// => 4개의 캐스팅 연산자를 제공합니다.
// => 반드시 모든 C++ 코드는 아래 4개만을 사용해서 캐스팅해야 합니다.
// => static_cast
// => reinterpret_cast
// => const_cast
// => dynamic_cast


// static_cast : 기본 캐스팅
//		    논리적으로 맞고 위험하지 않은 경우만 허용
//		    기본 타입의 값 캐스팅
//          void*=> 다른 타입*,
//			상속관계의 캐스팅 등.
//          반드시 연관성이 있어야 한다


int main()
{
	double d = 3.4;
//	int    n = d;	// ok. 단, 경고 발생할수 있다.
	int    n = static_cast<int>(d); // ok. 의도를 표현, 경고 없음


//	int* p1 = malloc(100);     // C언어 : ok. C++ : 에러


}

