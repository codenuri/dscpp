#include <cstdio>

namespace std
{
	class ostream
	{
	public:
		ostream& operator<<(int n) { printf("%d", n);  return *this; }
		ostream& operator<<(double d) { printf("%f", d); return *this;}
		ostream& operator<<(const char* s) { printf("%s", s); return *this;	}
	};
	ostream cout; 
}

int main()
{
	int    n = 10;

	std::cout << "A" << "B" << "n = " << n << "\n";
//  cout.operator<<("A").operator<<("B").operator<<("n=")
}


