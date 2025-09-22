// const_cast : 

int main()
{
	const int c = 10;

	int* p1 = &c;       // error.
	int* p2 = (int*)&c; // ok.  C 캐스팅은 대부분 성공

//	int* p3 = static_cast<int*>(&c); // error.
//	int* p4 = reinterpret_cast<int*>(&c); // error. const 제거는 위험하다!

	int* p5 = const_cast<int*>(&c); // ok. 동일 타입의 상수성 제거를 위한
									//     캐스팅

}
// 권장
// 1. C 스타일 캐스팅은 금지

// 2. static_cast 로만 캐스팅 권장

// 3. (2) 에서 에러가 나오면 원인을 보고 아래 중에 한개를 선택
// => reinterpret_cast
// => const_cast

// 4. 그래도 에러발생하면
// => 이 캐스팅은 할수 없다.
// => 잘못된 코드

// dynamic_cast : 상속 문법을 알아야 하고, 위와는 완전히 다른 용도
