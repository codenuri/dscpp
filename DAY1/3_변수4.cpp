// 28 page ~

// auto, decltype 이야기

int main()
{
	int x[3] = { 1,2,3 };

//	int  n = x[0];	// 타입을 명확히 표기
	auto n = x[0];	// 타입을 컴파일러에게 추론해 달라고 요청

//	auto : 우변의 표현식으로 좌변의 타입을 추론해 달라는 것
//		   컴파일 시간에 동작, 실행시 성능저하 없음.
//	       컴파일 하면  "int n = x[0]" 으로 변경
//		   아주 많이 사용됩니다. 꼭 알아 두세요.. 


	// a의 타입은 뭘까요 ?
	const int c = 10;
	auto a = c;	// 1. int a = c;
				// 2. const int a = c;
	

}
