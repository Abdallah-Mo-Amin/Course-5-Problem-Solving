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

int SumDigits(int Number)
{
	int Remainder = 0;
	int SumDigits = 0;

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		SumDigits += Remainder;
	}
	return SumDigits;
}

int main()
{	
	cout << "\nSum of digits = " 
		 << SumDigits(ReadPositveNumber("Please enter positive number "))
		 << "\n";
	return 0;
}
