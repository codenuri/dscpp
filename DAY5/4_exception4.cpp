#include <iostream>
#include <string>
// 예외를 던질때는 예외에 대한 다양한 정보를 담을수 있는 타입을 설계해서
// 사용하는 것이 원칙 입니다.
// => 권장 : C++ 표준의 std::exception 에서 파생 받는것을 권장.

class file_not_found : public std::exception
{
	std::string file_name;
};

// 아무런 멤버가 없는 것도 좋습니다.
// => 클래스 이름 자체가 정보 역활
class disconnect_wifi : public std::exception
{
};



// 하나의 함수에서 다양한 예외가 나올수도 있습니다.
int db_backup()
{
	if (1)
		throw file_not_found{}; // 임시객체 형태로 전달

	if (2)
		throw disconnect_wifi{};


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
	catch (const disconnect_wifi& e)
	{
		std::cout << "예외 발생\n";
	}
	catch (const file_not_found& e)
	{
		std::cout << "예외 발생\n";
	}
	catch (const std::exception& e)
	{
		std::cout << "예외 발생\n";
	}
	catch (...)
	{
		std::cout << "위에서 처리되지 않은 모든 경우를 여기서 잡겠다.\n";
	}

	db_remove();
}
