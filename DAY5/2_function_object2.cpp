#include <iostream>

// 일반 함수는 "상태"를 가질수 없습니다.
// 오직 "동작" 만 있습니다.
// => 따라서 함수 실행중 생성된 데이타를 보관했다가
//    다음번 실행시 참고 하려고 해도..
// => 보관할 장소가 없습니다


// 0 ~ 9 사이의 "중복되지 않은" 난수를 반환하는 함수
int urand()
{
	return rand() % 10;
}

int main()
{
	for (int i = 0; i < 10; i++)
	{
		std::cout << urand() << std::endl;
	}
}