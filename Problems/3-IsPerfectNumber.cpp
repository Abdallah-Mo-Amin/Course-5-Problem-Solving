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

bool IsPerfectNumber(int Number)
{
	int Sum = 0;
	for (int i = 1; i <= Number; i++)
	{
		if (Number % i == 0)
			Sum += i;
	}
	return Number == Sum;
}

void PrintResult(int Number)
{
	if (IsPerfectNumber(Number))
		cout << Number << " is perfect Number.\n";
	else
		cout << Number << " is not perfect Number.\n";
}

int main()
{	
	PrintResult(ReadPositveNumber("Please Enter positive number: "));
	return 0;
}
