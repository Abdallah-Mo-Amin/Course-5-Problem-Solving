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

void PrintInvertedLetterPattern(int Number)
{
	for (int i = 65 + Number - 1; i >= 65; i--)   // Rows
	{
		for (int j = 1; j <= Number - (65 + Number - 1 - i); j++)   // Coulums
		{
			cout << char(i);
		}
		cout << endl;
	}
}

int main()
{
	int Number = ReadPositveNumber("Please Enter Positive number ");
	PrintInvertedLetterPattern(Number);
	
	return 0;
}
