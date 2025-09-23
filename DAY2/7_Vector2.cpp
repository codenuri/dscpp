#include <iostream>

int main()
{
	int cnt = 0;
	std::cout << "학생수는 >> ";
	std::cin >> cnt;

	// 3. 입력된 학생수 만큼 다시 점수를 입력 받아야 합니다.
//	int score[cnt]; // error. 배열 크기로 변수 사용안됨
					// C++ 표준 : 배열 크기는 컴파일 시간에 알아야 한다.
					// g++ : 배열크기로 변수 사용 가능 - 표준 문법아닌데 허용
					// msvc : 배열크기로 변수 사용 안됨.

	// 핵심 : 실행시간에 결정된 크기의 메모리를 할당하려면
	//		  "동적 메모리할당" 밖에 없습니다.
	int* score = static_cast<int*>(malloc(sizeof(int) * cnt));
	free(score);


}