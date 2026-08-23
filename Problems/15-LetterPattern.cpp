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

void PrintLetterPattern(int Number)
{
	for (int i = 65; i <= Number + 65 - 1; i++)   // Rows
	{
		for (int j = 1; j <= i - 65 + 1; j++)   // Coulums
		{
			cout << char(i);
		}
		cout << endl;
	}
}

int main()
{
	int Number = ReadPositveNumber("Please Enter Positive number ");
	PrintLetterPattern(Number);
	
	return 0;
}
