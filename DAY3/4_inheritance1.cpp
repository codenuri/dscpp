// 5_상속1.cpp   132page ~
#include <iostream>
#include <string>
// 사람의 특징만 별도의 타입으로 설계
class Person
{
	std::string name;
	int age;
};

// Person 을 확장해서 새로운 타입을 설계
// => 상속(inheritance) 라고 불리는 문법
// => 공통의 특징(name, age) 를 한곳에서 관리할수 있게 된다
class Student : public Person
{		
	int    id;
};
class Professor : public Person
{
	int    major;
};

int main()
{
	Student s;
	Professor p;
}
// 용어
// Person  : Base(기반) class,     Super class, Parent class
// Student : Derived(파생) class  ,Sub class  , Child  class

// 참고
// C++   : class Student : public Person
// C#    : class Student : Person
// Python: class Student(Person)
// Java  : class Student extends Person