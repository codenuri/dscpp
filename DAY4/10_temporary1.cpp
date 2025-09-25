#include <iostream>

// 10_temporary1

// 임시객체 개념
// => 약간 어려운 개념이지만, 연산자재정의등을 이해하기 위해 필요

class Point
{
public:
	int x, y;

	Point(int a, int b) : x{ a }, y{ b } { std::cout << "Point()" << std::endl; }

	~Point()            { std::cout << "~Point()" << std::endl;	}
};

int main()
{
//	Point pt(1, 2); // 이름이 있는 객체(named object)
					// 이름 : pt
					// 특징 : 이름이 있으므로 다음 문장에서도 사용가능.
				    // 수명 : 자신을 선언한 {} 을 벗어날때 파괴

//	Point (1, 2);	// 이름이 없는 객체(unnamed object)
					// 특징 : 이름이 없어서 다음 문장에서 접근 안됨
					// 수명 : 자신을 선언한 문장의 끝(;만날때 파괴)
					// "임시객체(temporary, temporary object)"라고도합니다.

	Point(1, 2), std::cout << "x\n";

	std::cout << "-------" << std::endl;

	// 참고 Point 는 함수 이름이 아닌 클래스이름 
	
	Point(1, 2); // 함수 호출이 아닌 임시객체 생성인데..
				 // 함수 호출처럼 보여서 헷갈립니다.

	Point{ 1,2 }; // 이렇게 하면 임시객체라는 게 명확합니다.
					// 그래서 C++11 이후는 이 코드 권장. 

}





