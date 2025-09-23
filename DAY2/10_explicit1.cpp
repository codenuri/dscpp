// 10_explicit1.cpp

class Vector 
{
public:
	Vector(int sz) {}
};

int main()
{
	int n1 = 10;

//	인자가 한개인 생성자가 있다면 아래의 4가지 방법으로 객체생성 가능합니다.
	Vector v1(10);
	Vector v2 = 10;
	Vector v3{ 10 };
	Vector v4 = { 10 };
}