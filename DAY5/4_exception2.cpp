#include <iostream>

// 예외 문법

// 1. 함수 실패하면 예외를 던집니다.(throw)

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
