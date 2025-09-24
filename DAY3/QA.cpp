// QA.cpp
// 포인터와 const 이야기

int x = 10;
int y = 10;

// c1, c2 은 완벽히 동일
const int c1 = 10;
int const c2 = 10;

// 포인터의 경우의 * 의 위치가 핵심
const int* p1 = &x; // p1 의 대상체가 const
int const* p2 = &x; // p2 는 p1과 동일

int* const p3 = &x; // p3 자체가 const, 대상체는 const 아님.

p1 = &y;  // ok
*p1 = 10; // error
p3 = &y;  // error
*p3 = 10; // ok