// Euler_2.cpp : Defines the entry point for the console application.
//

#include <SDKDDKVer.h>
#include <iostream>
using namespace std;

__forceinline bool palindrome(char* szIn, int cch)
{
	for (int i = 0; i <= (cch/2); i++)
	{
		if (szIn[i] != szIn[cch-i-1])
		{
			return false;
		}
	}
	return true;
}

int main(int argc, char* argv[])
{
	int prod = 0;
	char szprod[32];
	int foundi, foundj, foundprod = 0;

	for (int i = 999; i > 99; i--)
	{
		for (int j = 999; j > 99; j--)
		{
			prod = i*j;
			sprintf_s(szprod, 32, "%d", prod);

			if (palindrome(szprod, strlen(szprod)))
			{
				if (prod > foundprod)
				{
					foundi = i;
					foundj = j;
					foundprod = prod;
				}
			}
		}
	}
	cout << endl << "i: " << foundi << ", j: " << foundj << ", prod: " << foundprod << "." << endl;
	cin.ignore();
	return 0;
}
