#include <SDKDDKVer.h>
#include <iostream>
using namespace std;

/*
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143
*/

__forceinline bool isprime(__int64 p)
{
	for (__int64 i = 3; i < sqrt(p); i+=2)
	{
		if (0 == p % i)
			return false;
	}
	return true;
}

int main(int argc, char* argv[])
{
	__int64 num = 600851475143;
	//__int64 num = 13195;
	__int64 prime = 0;

	for (__int64 i=3; i <= num/2; i+=2)
	{
		// if the number isn't divisible without remainder, skip it
		if( (0 == num % i) && isprime(i) )
		{
			prime = i;
			cout << "prime: " << prime << endl;
		}
		else
		{
			//cout << "skipping: " << i << endl;
		}
	}

	cout << endl << "Prime: " << prime << endl;
	cin.ignore();

	return 0;
}
