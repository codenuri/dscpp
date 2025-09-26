#include <iostream>

// 던져진 예외를 받는 방법
// 1. 예외 가능성이 있는 함수 호출시 try 블럭 사용
// 2. 예외를 받을때는 catch 사용

int db_backup()
{
	if (1)		
		throw 1;

	return 100;
}

void db_remove() { std::cout << "remove db\n"; }

int main()
{
	try
	{
		int ret = db_backup();

		std::cout << "예외 발생시 이문장 실행안됨\n";
	}
	catch (int e)
	{
		std::cout << "예외 발생\n";

		// 발생된 오류를 해결하지 못한경우 여기서 프로그램을 종료하세요
		// std::exit(-1);

		// 그렇지 않으면 프로그램은 계속 실행
	}
	

	db_remove();
}
