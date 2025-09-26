// 6_알고리즘1
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main()
{
	std::vector<int> v = { 1,2,9,4,3,6,7,3,9,10 };

	// 주어진 구간에서 처음 나오는 "3" 을 찾아라
	auto ret1 = std::find(v.begin(), v.end(), 3); 

	// ret1 은 
	// 검색 실패시 : find 의 2번째 인자로 보낸 구간의 끝과 동일
	// 검색 성공시 : 요소(3)의 위치를 나타내는 반복자

	if (ret1 == v.end())
	{
		std::cout << "검색 실패\n";
	}
	else
	{
		std::cout << "검색 성공 : " << *ret1 << std::endl;
	}
	
}


