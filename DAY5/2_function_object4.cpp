#include <iostream>
#include <bitset>	

template<int N>
class URandom
{
	std::bitset<N> bs; 
	bool recycle;
	int start;
public:
	URandom(int start = 0, bool b = false) : start{ start }, recycle { b }
	{
		bs.set();  
	}

	int operator()()
	{
		if (bs.none()) 
		{
			if (recycle == false)
				return -1; 
			else
				bs.set(); 		
		}


		int k;

		while (!bs.test(k = rand() % N));

		bs.reset(k);

		return k + start;
	}
};

URandom<20> urand{ 11, true };

int main()
{
	for (int i = 0; i < 15; i++)
	{
		std::cout << urand() << std::endl;
	}
}