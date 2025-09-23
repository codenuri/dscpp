#include <iostream>


// C 언어 문자열
// => char [] 이나 char* 를 사용해서 표현
// => 다양한 문자열 작업을 하려면 문자열 관련 표준 함수를 사용해야 한다.
#include <cstring> // <string.h>, C 문자열 관련 함수를 제공하는 헤더

void ex1()
{
	char s1[] = "ABCD";
	char s2[10] = { 0 };

	strcpy_s(s2, strlen(s1), s1);

	if (strcmp(s1, s2) == 0) {}
}

// C++ 문자열
// => class 문법으로 만들어진 std::string 이라는 타입을 제공
// => 정수형 변수와 유사하게 사용가능
#include <string>

void ex2()
{
	std::string s1 = "ABCD";
	std::string s2;

	s2 = s1;

	if (s1 == s2) {}

	s2 = s1 + s1; // + 도 가능. 
}

int main()
{
	ex1();
	ex2();
}