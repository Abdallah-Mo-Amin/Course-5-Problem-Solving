#include <iostream>
#include <string>
#include <cmath>

using namespace std;

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

void PrintInvertedPattern(int Number)
{
	for (int i = Number; i >= 1; i--)   // Rows
	{
		for (int j = 1; j <= i; j++)   // Coulums
		{
			cout << i;
		}
		cout << endl;
	}
}

int main()
{
	int Number = ReadPositveNumber("Please Enter Positive number ");
	PrintInvertedPattern(Number);
	
	return 0;
}
