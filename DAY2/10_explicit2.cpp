// 10_explicit1.cpp

class Vector
{
public:
	Vector(int sz) {}
};

void foo(Vector v) {}

int main()
{
	Vector v1(10);		
	Vector v2 = 10;		

	Vector v3{ 10 };	
	Vector v4 = { 10 }; 

	foo(v1);
	foo(10); // ?? 
}