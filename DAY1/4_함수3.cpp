// C++ 함수 특징 3. inline   .. 36page

// 장점 : 호출 보다 치환이 빠르다.
// 단점 : 여러번 치환 되면 코드메모리가 증가할수 있다.
//        하지만, add2는 어셈블리 코드가 3~4줄에 불과 하다.
//		  여러번 치환되면 전혀 문제 없다.
//        하지만, 크기가 큰(여러줄) 함수는 치환하면 메모리 증가

       int add1(int a, int b) { return a + b; }
inline int add2(int a, int b) { return a + b; }

int main()
{
	int n1 = add1(1, 2);  // 1. 2개의 인자를 약속된 장소에 넣고(32bit환경: 스택, 64bit 환경 : 레지스터)
						  // 2. 해당 함수(add1) 으로 이동

	int n2 = add2(1, 2);  // add 의 기계어 코드가 이 위치에 치환
							// mov eax, 1
							// add eax, 2
							// mov n2, eax
}
