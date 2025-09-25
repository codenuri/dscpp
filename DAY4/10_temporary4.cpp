#include <iostream>

// 핵심 #1. 멤버 함수가 *this 를 반환하면 멤버함수를 연속적으로 호출 가능합니다.
// => 메소드 체이닝이라는 기술이고
// => 요즘 정말 많이 유행합니다.
// => 코드가 쉬워지고 보기 좋습니다.

// #2. 멤버 함수가 *this 를 반환 한다면 
// => 반드시 반환 타입은 reference 이어야 합니다.

class Counter
{
	int cnt = 0;
public:
	//	Counter  increment()  // 버그.. 내 자신이 아닌 복사본 반환 입니다.
	Counter& increment()  // <== 이렇게 해야 합니다.
	{
		++cnt;

		return *this;
	}
	int get_count() const { return cnt; }

	~Counter()
	{
		std::cout << "~Counter() : cnt = " << cnt << std::endl;
	}

	Counter() {}  // 디폴트 생성자

	// 아래 함수가 내일 배우는 "복사 생성자"
	// => temporary 만들때 아래 함수 사용
	Counter(const Counter& other) : cnt{ other.cnt }
	{
		std::cout << "temporary 생성 : cnt " << cnt << std::endl;
	}
};

int main()
{
	Counter c;

	// 메소드 체이닝 기술
	// => 멤버함수(메소드)를 연속적으로 호출하게 하는 기술
	// => 동일 멤버 함수 일수도 있고, 다른 멤버 함수 일수도 있다
	std::cout << "----------------------------------\n";
	c.increment().increment().increment();
	std::cout << "----------------------------------\n";

	std::cout << c.get_count() << std::endl;
}


// 임시객체
// 1. 사용자가 직접 만들수도 있고
// => 함수 인자로 객체 보낼때 : draw_line(Point{1,1}, Point{2,2});

// 2. 특정 코드에서 생성될수도 있다.
// => 함수가 사용자 정의 타입의 값 타입으로 반환 할때
// => Point foo() ;

// 3. 메소드 체이닝등의 기술을 위해 *this 를 반환 한다면
// => 반드시 reference 타입으로 반환

