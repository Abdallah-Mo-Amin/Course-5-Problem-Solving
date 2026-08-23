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

int ReverseNumber(int Number)
{
	int Remainder = 0, Number2 = 0;

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		Number2 = Number2 * 10 + Remainder;
	}
	return Number2;

}

bool IsPalindromeNumber(int Number)
{
	return Number == ReverseNumber(Number);
}

int main()
{
	int Number = ReadPositveNumber("Please Enter the main number ");
	
	if (IsPalindromeNumber(Number))
		cout << "\nYes, it is a palindrom numbe.\n";
	else
		cout << "\nNo, it is not a palindrom numbe.\n";

	return 0;
}
