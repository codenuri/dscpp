class Vector
{
	int data;
public:

	// [] 연산자 재정의 
	// => 객체를 배열 처럼 사용할수 있게 할때 사용
	// => v[0] = 10 의 형태로 왼쪽에 올수도 있으므로 보통 reference 반환
	int& operator[](int idx)
	{
		return data;
	}
};

int main()
{
	Vector v;
	v[0] = 10; // 이 코드를 되게 해봅시다.


	// p1 + p2 => p1.operator+(p2)
	// p1 - p2 => p1.operator-(p2)
	// p1[0]   => p1.operator[](0)
}