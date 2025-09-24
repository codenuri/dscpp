int main()
{
	int x1[3] = { 1,2,3 };
	const int x2[3] = { 1,2,3 };

	// 다음중 에러는 고르세요
	x1[0] = 10;		// 1. ok
	x2[0] = 10;		// 2. error

	int n1 = x1[0];	// 3. ok
	int n2 = x2[0];	// 4. ok
}