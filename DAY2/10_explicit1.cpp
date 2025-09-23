// 10_explicit1.cpp

class Vector 
{
public:
	Vector(int sz) {}
};

int main()
{
	int n1 = 10; 
	int n2(10); // C 는 안됨. C++만 가능. 하지만 잘 사용 안함

//	인자가 한개인 생성자가 있다면 아래의 4가지 방법으로 객체생성 가능합니다.
	Vector v1(10);		// C++98  direct initialization
	Vector v2 = 10;		// C++98  copy initialization

	Vector v3{ 10 };	// C++11  direct initialization. brace init
	Vector v4 = { 10 }; // C++11  copy   initialization. brace init
}