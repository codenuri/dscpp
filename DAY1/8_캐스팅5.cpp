int main()
{
	const int c = 10;

	// c의 주소를 double* 에 담고 싶습니다.
	double* p1 = (double*)&c; // ok.  C 스타일은 대부분 허용

	// 위 코드를 C++ 스타일로 변경해 보세요

//	double* p2 = reinterpret_cast<double*>(&c); // error. const 제거 못함
	
//	double* p2 = const_cast<double*>(&c); // error. 동일 타입의 const 제거만 가능

	double* p2 = reinterpret_cast<double*>(const_cast<int*>(&c));
					// const int* => int*
					// int* => double*
}





