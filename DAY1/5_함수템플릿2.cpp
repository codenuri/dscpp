#include <iostream>

template<typename T>
T Add(T a, T b)
{
	return a + b;
}
int main()
{
	// #1. 아래 코드는 왜 에러일까요 ? 에러의 정확인 원인 ?
	// => T의 타입을 추론할수 없다.
	// => 1번째인자(1) 로 추론하면 int, 2번째 인자(2.1)로 추론하면 double
	// std::cout << Add(1, 2.1) << std::endl;

	// #2. 아래 처럼 T의 타입을 알려주면 에러가 아닙니다.
	// => 단점 #1. 항상 타입을 표기해야 한다.
	// => 단점 #2. 결국 Add는 2개의 인자를 같은 타입으로 받게 되고
	//			  아래의 경우 1(int) => double 로 형변환되어 전달되는 것
	std::cout << Add<double>(1, 2.1) << std::endl;
	
}

