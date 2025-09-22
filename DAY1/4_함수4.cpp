// 4_함수4
// C++ 함수의 특징 4. 함수 템플릿 - 39 page
// C++의 핵심.. 반드시 정확히 이해 하세요

/*
int square(int a)
{
	return a * a;
}
double square(double a)
{
	return a * a;
}
*/

// 타입만 다르고, 구현이 동일(유사)하다면
// 함수를 만들지 말고, 함수를 만드는 틀(template)을 만드세요

template<typename T> 
T square(T a)
{
	return a * a;
}

int main()
{
	// 함수 템플릿 사용하기 #1. 타입 인자 전달
//	square<int>(3);			// 1. 틀을 사용해서 int square(int) 함수 생성
							// 2. 이 위치는 "call square(int)" 의 코드생성

//	square<double>(3.4);	// 1. 틀을 사용해서 double square(double) 함수 생성
							// 2. 이 위치는 "call square(double)" 의 코드생성

	// #2. 타입 인자 생략
	// => 이 경우, 함수 인자로 부터 T 의 타입 추론
	square(3);
	square(3.4);
}