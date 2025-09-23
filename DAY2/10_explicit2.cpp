// 10_explicit1.cpp

class Vector
{
public:
	// explicit 생성자
	// => 직접 초기화만 가능하고, 복사 초기화는 사용할수 없게 해달라는 것
	// => 타입 만들때 "복사 초기화" 가 자연스럽지 않은 경우 사용
	//    (아래 foo 처럼 함수 인자로 만들어서 판단해 보세요)
	explicit Vector(int sz) {}
};

void foo(Vector v) {}

int main()
{
	Vector v1(10);		
	Vector v2 = 10;		// explicit 라면 error

	Vector v3{ 10 };	// explicit 라면 error
	Vector v4 = { 10 }; 

	foo(v1); // ok.  Vector v = v1;
	foo(10); // ok.  Vector v = 10
			 // 단, explicit 라면 error
}