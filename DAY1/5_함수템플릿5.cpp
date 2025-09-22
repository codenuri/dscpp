#include <iostream>

// C++14 부터 반환 타입 위치에 auto 만 표기해도 됩니다.
// => 정확한 의미는 "return expression" 에서 
//    expression 으로 반환 타입을 결정해 달라는 의미

// => 한계점 : return 문장이 2개 이상이고 서로 다른 타입으로 반환하면
//			  추론할수 없음. 
template<typename T1, typename T2>
auto Add1(T1 a, T2 b) 
{
	if (b == 0) return a; // 이 코드가 있으면 에러 날수 있습니다.
	return a + b;
}
  

template<typename T1, typename T2>
auto Add2(T1 a, T2 b) -> decltype(a + b)
{
	return a + b;
}

int main()
{
	std::cout << Add(1, 2.1) << std::endl;

}

