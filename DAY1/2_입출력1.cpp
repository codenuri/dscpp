#include <cstdio>   // printf
#include <iostream> // std::cout, std::cin, printf 도 가능

// 13page

int main()
{
	int n = 10;

	// C style 입출력
	printf("n = %d\n", n); // C style
	scanf_s("%d", &n);	   // 입력

	
	// C++ style
	// 특징 : << 을 연속해서 사용가능.
	//        %d, %f 등은 필요 없음.
	// 개행 : std::endl 또는 '\n'
	// 
	// printf 정체 : 함수 입니다.
	// std::cout   : 객체라는 개념(4일차 오후 만드는 법 배웁니다.)
	std::cout << "n = " << n << std::endl;
	std::cout << "n = " << n << '\n'; // 이코드가 약간 빠릅니다.
		
	// 입력은 아래 처럼
	std::cin >> n;  // &n 가 아닌 n
					// >> 방향에 주의
}
