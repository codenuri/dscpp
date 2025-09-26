// 접근변경자1

class Base
{
public:
	int a;
};

class Derived : public Base
{
};

int main()
{
	Derived derv;
	derv.a = 10; // ??
}