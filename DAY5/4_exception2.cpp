#include <iostream>

// 예외 문법

// 1. 함수 실패하면 예외를 던집니다.(throw)
// => 호출자가 던져진 예외를 받지 않으면 프로그램은 종료됨.
// => 즉, 더 이상 실행될수 없음.(이게 더 안전하다는 생각)

int db_backup()
{
	if (1)		// 실패 라고 가정
		throw 1;// 예외 던짐(throw)

	return 100;
}

void db_remove() { std::cout << "remove db\n"; }

int main()
{
	int ret = db_backup();

	db_remove();
}
