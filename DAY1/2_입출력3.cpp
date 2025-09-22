
// std::cout : C++98 부터 사용하던 표준 출력
// => 여러개 변수를 출력하거나, 서식을 지정하면 코드가 길어지고 복잡합니다.
// => 비판이 많았습니다.

// C++23 에서 새로운 출력함수 등장
#include <print>

int main()
{
	int n = 10;
	double d = 3.4;

	std::println("{}, {}", n, d);
	std::println("{0}, {1}", n, d);
	std::println("{0:x}", n);
}