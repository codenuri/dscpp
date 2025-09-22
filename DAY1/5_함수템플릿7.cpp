// 함수 템플릿 모양 총정리
// 1. 아래 코드가 C++98 시절 부터 사용되던 모양
// 2. typename 대신 class 키워드 가능
// 
//template<typename T>
template<class T>
T square(T a)
{
	return a * a;
}

int main()
{
	square(3);		
	square(3.4);	
}
