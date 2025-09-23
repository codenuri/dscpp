#include <iostream>

int main()
{
	// 4. 사용자가 -1을 입력할때 까지 계속 입력 받고 싶습니다.
	//   단, 입력된 모든 값은 보관되어 있어야 합니다.

//	int score[4];	// 이렇게 만들면 필요 없을때 제거 할수 없습니다.

	int size = 4;

	int* score = new int[size]; // 이때는 크기로 변수 가능

	int cnt = 0;

	int n = 0;

	while (1)
	{
		std::cin >> n;

		if (n == -1)
			break;

		score[cnt++] = n;

		if (size == cnt)
		{
			// 아래 코드가 핵심
			// #1. 새로운 버퍼(배열)할당
			int* tmp = new int[ size * 2 ];

			// #2. 기존 버퍼내용 => 새로운 버퍼에 복사
			// => score 가 "가리키는" 메모리를
			// => tmp   가 "가리키는" 메모리에 복사
			memcpy(tmp, score, sizeof(int) * size);

			// #3. 기본 버퍼 제거
			// => score 를 제거하는 것이 아니라
			// => score 가 가리키는 메모리를 해지
			delete[] score;

			// #4. score가 새로운 버퍼 사용
			score = tmp;

			// #5. size 변수 변경
			size = size * 2;

		}
	}

	for (int i = 0; i < cnt; i++)
	{
		std::cout << score[i] << ", ";
	}
	std::cout << std::endl;

	std::cout << "할당된 메모리 갯수 : " << size << std::endl;
	std::cout << "데이타 갯수 : " << cnt << std::endl;

	// 더 이상 필요없다면 "최종 메모리는 제거"
	delete[] score;


}