#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };

	// v.at(idx) : 잘못된 인덱스 사용시 예외 발생
	//		       1. 잘못되었는지 확인하므로 if 문 필요 - 성능저하
	//			   2. 예외 사용에 따른 성능저하

	// v[idx] : 무조건 idx 사용. if 조사도 없음.
	//		    빠르다. 그런데, 잘못사용하면 오류..

	try
	{
		v.at(8) = 10;
//		v[8] = 10;	// 1. 예외 발생
					// 2. 그냥, 잘못된 메모리 접근
	}
	catch (const std::out_of_range& e) // C++표준이 가진 예외
	{
		std::cout << "예외 발생\n";
	}
	std::cout << "계속실행\n";
}