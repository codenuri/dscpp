// 추상클래스 - 156page
// 추상 클래스(abstract class)
// 정의 : 순수 가상함수가 한개 이상 있는것
// 특징 : 객체를 만들수 없다. 포인터 변수는 생성 가능
// 의도 : 약속된 함수를 반드시 만들라고 시키는 것
//       만들지 않으면 클래스(Rect)를 사용할수 없게된다. 
class Shape
{
public:
	virtual void draw() = 0; // 순수 가상함수(pure virtual function)
							 // => 구현부가 없고, =0 으로 표기
};

class Rect : public Shape
{
public:
	// draw()의 구현부를 제공하지 않으면 Rect 도 추상
	// draw()의 구현부를 제공하면 Rect 는 추상아님

	void draw() override {}
};

int main()
{
	Shape s; // error. 추상 클래스는 객체를 만들수 없다.
	Shape* p; // ok

	Rect  r; // ok
}


