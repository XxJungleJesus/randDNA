#include <iostream>
#include <string>
#include <random>

using namespace std;

string randDNA( int seed, string bases, int lett)
{
	std::mt19937 eng1(seed);
	string rand;
	uniform_int_distribution<int>un(0, bases.size()-1);
	
	for (int i=0; i<lett; i++)
	{
		rand+= bases[un (eng1)];
	}
	return rand;
}
