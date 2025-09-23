#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v; // 크기가 0일 동적 배열

	int n = 0;

	while (1)
	{
		std::cin >> n;

		if (n == -1)
			break;

		v.push_back(n); // 끝에 한개 추가
						// 메모리는 자동으로 관리
	}

	for (auto e : v)
	{
		std::cout << e << ", ";
	}

	std::cout << std::endl;

	std::cout << "할당된 메모리 갯수 : "  << v.capacity() << std::endl;
	std::cout << "데이타 갯수 : "		<< v.size() << std::endl;
}

