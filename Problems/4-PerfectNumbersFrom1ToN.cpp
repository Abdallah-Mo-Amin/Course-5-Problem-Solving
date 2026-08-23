#include <iostream>
#include <string>
#include <cmath>

using namespace std;

enum enPerfectOrNot{Perfect = 1, NotPerfect = 2};

int ReadPositveNumber(string Massage)
{
	int Number = 0;
	do
	{
		cout << Massage << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

bool IsPerfect(int Number)
{
	int Sum = 0;

	for (int i = 1; i < Number; i++)
	{
		if (Number % i == 0)
		{
			Sum += i;
		}
	}
	return Number == Sum;
}

void PrintPerfectNumbersFrom1ToN(int Number)
{
	for (int i = 1; i <= Number; i++)
	{
		if (IsPerfect(i))
			cout << i << endl;
	}
}

int main()
{	
	PrintPerfectNumbersFrom1ToN(ReadPositveNumber("Please enter a positive number"));
	return 0;
}
