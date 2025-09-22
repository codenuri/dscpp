// 왜 "컴파일 시간에 값을 아는것" 이 중요한가요 ?
// => 배열의 크기, 템플릿 인자등 다양한 문법에서
//   컴파일 시간 상수를 요구 합니다.
int main()
{
	int sz = 10;
	const int c1 = sz;
	const int c2 = 10;
	constexpr int c3 = 10;

	int x1[10]; // ?
	int x2[c1]; // ?
	int x3[c2]; // ?
	int x4[c3]; // ?

}