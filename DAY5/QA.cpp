// QA

Point p1 = { 1,2 }; // 이코드의 정확한 원리
// 1. {1,2} 를 가지고 => Point 임시객체 생성
// 2. Point p1 = 임시객체;
//     => 즉, 이부분에서 "복사 생성자"가 호출되는 원리


foo(Vector v) {}

foo(10);

Vector v1 = 10; // error 나게.
// 1. 10 => Vector 임시객체
// 2. Vector v1 = 임시객체;
*/