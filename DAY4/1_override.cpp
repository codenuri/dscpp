// override  145 page ~

class Animal
{
public:
	virtual void cry() {}
};

class Dog : public Animal
{
public:
	// #1. 가상함수 재정의시 virtual 은 표기해도 되고 없어도 됩니다.
	// virtual void cry()  {}
	// void cry() {}	// 이렇게 해도 위 코드와 동일
						// 하지만, 가독성을 위해 붙이는 것을 권장.

	// #2. 가상함수 재정의시 실수(오타)가 있다면
	// => 에러가 아닙니다. 컴파일러는 새로운 함수를 만든 것으로 생각
//	virtual void Cry() {}  // 실수(소문자인데, 대문자로)

	// #3. #2 때문에 버그가 너무 많았습니다.
	// => 그래서 C++11 에서 override 키워드 도입
	// => 새로운 함수가 아니라 가상함수를 재정의하고 있다고 알려주는 것
	virtual void Cry() override {}  
};



int main()
{

}

