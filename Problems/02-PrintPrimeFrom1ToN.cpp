#include <iostream>
#include <string>
#include <cmath>

using namespace std;

enum enPrimeOrNotPrime {Prime = 1, NotPrime = 2};

int ReadPositiveNumber(string Massage)
{
	int Number = 0;
	do
	{
		cout << Massage << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

enPrimeOrNotPrime CheckPrime(int &Number)
{
	int M = round(Number / 2);
	for (int i = 2; i < Number; i++)
	{
		if (Number % i == 0)
			return enPrimeOrNotPrime::NotPrime;
	}
	return enPrimeOrNotPrime::Prime;
}

void PrintPrimeNumberFrom1ToN(int Number)
{
	cout << "\nPrime Number From 1 To " << Number << " are " << endl;

	for (int j = 1; j <= Number; j++)
	{
		if (CheckPrime(j) == enPrimeOrNotPrime::Prime)
			cout << j << endl;
	}
}

int main()
{	
	PrintPrimeNumberFrom1ToN(ReadPositiveNumber("Please Enter a Number"));
	return 0;
}
