// protected.   135 page ~
// C++의 접근 지정자는 3개 입니다.
// => private, protected, public
// => protected 상속문법을 사용시만 의미 있음.
//    상속이 아닌 경우는 결국 외부 접근 안되므로 private 과 동일 

class Base
{
private:   
	int a;	// 자신의 멤버만 접근 가능. 파생 클래스멤버도 접근 안됨

protected:	// 자신의 멤버와 "파생 클래스 멤버"에서 접근 가능
	int b;	

public:		// 어디서든 접근 가능
	int c;	
};
class Derived : public Base  
{
public:
	void foo()
	{
		a = 0;	// error
		b = 0;  // ok
		c = 0;  // ok
	}
};
int main()
{
	Base base;
	base.a = 0; // error. private
	base.b = 0; // error. protected
	base.c = 0; // ok
}
