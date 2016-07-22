#include <SDKDDKVer.h>
#include <iostream>
using namespace std;

/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

__forceinline bool test(long p)
{
	if ( (0 == p %  7) && (0 == p % 11) && (0 == p % 13) && (0 == p % 16)
	  && (0 == p % 17) && (0 == p % 18) && (0 == p % 19) && (0 == p % 20) )
	{
		return true;
	}
	return false;
}

int main(int argc, char* argv[])
{
	long i = 20;
	bool found = false;

	while (!found)
	{
		if (test(i))
		{
			found = true;
		}
		else
		{
			i+=20;
		}
	}

	cout << endl << "Num: " << i << endl;
	cin.ignore();

	return 0;
}
