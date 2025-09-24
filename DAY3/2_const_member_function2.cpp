// 상수 멤버 함수는 "선택이 아닌 필수" 문법 입니다.

// 객체의 상태를 변경하지 않은 모든 멤버 함수(get_xxx, getter) 는
// 반드시 상수 멤버 함수로 해야 합니다.

// 아래 "get_area()" 를 const member function 으로 하지 않은 것은
// => "완전히 틀린 코드" 입니다.

// C++은 함수인자로 "const &" 를 많이 사용
// => 상수 참조라도 "get_area()" 호출 가능해야 합니다.

class Rect
{
	int x, y, w, h;
public:
	Rect(int a, int b, int c, int d)
		: x{ a }, y{ b }, w{ c }, h{ d } {}

//	int get_area() { return w * h; }        // 나쁜 코드가 아닌 "틀린 코드"
	int get_area() const { return w * h; }	// 반드시 const 필요
};

//void foo(Rect r)	// call by value 의 오버헤드
void foo(const Rect& r)
{
	int n = r.get_area();
}

int main()
{
	Rect r{ 1, 1, 10, 10 };	// 상수 객체 아님.

	int n = r.get_area();	// ok. 
	
	foo(r);
}



