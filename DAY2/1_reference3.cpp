// 1_레퍼런스3. 63 page
struct Rect
{
	int x, y, width, height;
};

void foo(int n) // call by value : 인자의 원본을 수정하지 않을 것이라는 약속
{				//					안전한 코드!!. 좋은 기술
	n = 3; // 복사본 변경. main 의 x는 변경되지 않는다.
}

//void goo(Rect rc) // call by value : 안전하지만, 복사본의 오버헤드가 있다
void goo(const Rect& rc) // call by constreference
{						 // => 복사본없이, 원본을 수정할수 없게
						 // => C++ 에서 가장 유명한 코드중 한개!
//	rc.x = 10; // error
}

int main()
{
	int x = 100;

	// foo 는 전달된 인자의 x 를 절대 변경하면 안된다.
	foo(x);

	Rect rc = { 1,1,10,10 };
	goo(rc);
}
