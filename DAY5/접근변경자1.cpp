// 접근변경자1

class Base
{
public:
	int a;
};

// private 상속
// => 기반 클래스 멤버를 상속 받을때, 
// => private 영역으로 상속해 달라. 

//class Derived : public Base	// 접근 권한 동일하게 유지
class Derived : private Base	// 접근 권한 축소
{
};

int main()
{
	Derived derv;
	derv.a = 10; // ??
}