// 1_레퍼런스4.   65 page

int x = 0;
int  foo() { return x; }  // x 가 아닌, x의 값 0을 반환
int& goo() { return x; }  // x 의 값이 아닌 별명으로 반환
int* hoo() { return &x; }

int main()
{
	int v1 = 10, v2 = 20;

	v1 = 20; // ok		v1 : = 의 왼쪽에 올수 있다. lvalue

	10 = v1; // error.  10 : =의 왼쪽에 올수 없다.
					//		 오른쪽만 가능, rvalue	


	foo() = 20; // error.  "0 = 20" 의 의미
	goo() = 20; // ok.     "x = 20" 의 의미

	*(hoo()) = 20; // ok
}

// 핵심
// => 함수가 reference 를 반환 하면
// => 함수 호출식을 등호의 왼쪽에 놓을수 있습니다(lvalue 가 될수 있다)

// 왜 함수 호출을 등호의 왼쪽에 놓나요 ??
// => 아주 널리 사용되고, 오늘 오후 예제에서 등장.. 